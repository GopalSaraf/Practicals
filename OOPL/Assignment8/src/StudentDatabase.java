import java.io.*;
import java.util.*;

public final class StudentDatabase {
    private static final String filePath = "./src/students.csv";
    private static final File studentsFile = new File(filePath);

    private static final String[] studentsColumnOrderArray = {
            "studentID",
            "name",
            "rollNo",
            "division",
            "marks",
            "address"
    };

    private static final List<String> studentsColumnOrder = Arrays.asList(studentsColumnOrderArray);

    public static void addStudent(int studentID, String name, int rollNo, String division, float marks,
            String address) {
        try {
            PrintWriter pw = new PrintWriter(new FileOutputStream(studentsFile, true));
            BufferedReader br = new BufferedReader(new FileReader(filePath));
            String stream = br.readLine();
            if (stream == null)
                pw.append("StudentId,Name,Roll No,Division,Marks,Address\n");

            pw.append(String.valueOf(studentID))
                    .append(",")
                    .append(name)
                    .append(",")
                    .append(String.valueOf(rollNo))
                    .append(",")
                    .append(division)
                    .append(",")
                    .append(String.valueOf(marks))
                    .append(",")
                    .append(address.replace(',', '_'))
                    .append("\n");
            br.close();
            pw.close();
        } catch (Exception ignored) {
        }
    }

    public static void addStudent(Student student) {
        addStudent(
                student.getStudentID(),
                student.getName(),
                student.getRollNo(),
                student.getDivision(),
                student.getMarks(),
                student.getAddress());
    }

    public static Map<String, String> getStudentInfo(int studentID) {
        try {
            Map<String, String> studentDetails = new HashMap<>();
            BufferedReader br = new BufferedReader(new FileReader(filePath));
            String stream = br.readLine(); // header line
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (studentID == Integer.parseInt(data[studentsColumnOrder.indexOf("studentID")])) {
                    for (int i = 0; i < studentsColumnOrder.size(); i++) {
                        String key = studentsColumnOrder.get(i);
                        String value = data[studentsColumnOrder.indexOf(key)];
                        studentDetails.put(key, value);
                    }
                    br.close();
                    return studentDetails;
                }
            }
            br.close();
        } catch (Exception ignored) {
        }
        return null;
    }

    public static Student getStudent(int studentID) {
        Map<String, String> studentInfo = getStudentInfo(studentID);

        if (studentInfo == null)
            return null;

        String name = studentInfo.get("name");
        int rollNo = Integer.parseInt(studentInfo.get("rollNo"));
        String division = studentInfo.get("division");
        float marks = Float.parseFloat(studentInfo.get("marks"));
        String address = studentInfo.get("address").replace('_', ',');

        return new Student(studentID, name, rollNo, division, marks, address);
    }

    public static void updateStudent(int studentID, String name, int rollNo, String division, float marks,
            String address) {
        StringBuffer sb = new StringBuffer();
        sb.append("StudentId,Name,Roll No,Division,Marks,Address\n");
        try {
            BufferedReader br = new BufferedReader(new FileReader(filePath));
            String stream = br.readLine();
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (studentID == Integer.parseInt(data[studentsColumnOrder.indexOf("studentID")])) {
                    StringBuilder row = new StringBuilder();
                    for (int i = 0; i < studentsColumnOrder.size(); i++) {
                        if (i == studentsColumnOrder.indexOf("name"))
                            row.append(name);
                        else if (i == studentsColumnOrder.indexOf("rollNo"))
                            row.append(rollNo);
                        else if (i == studentsColumnOrder.indexOf("division"))
                            row.append(division);
                        else if (i == studentsColumnOrder.indexOf("marks"))
                            row.append(marks);
                        else if (i == studentsColumnOrder.indexOf("address"))
                            row.append(address.replace(',', '_'));
                        else
                            row.append(data[i]);
                        if (!(i == studentsColumnOrder.size() - 1))
                            row.append(",");
                    }
                    sb.append(row).append("\n");
                } else
                    sb.append(stream).append("\n");
            }
            br.close();

            PrintWriter pw = new PrintWriter(new FileOutputStream(filePath, false));
            pw.print(sb);
            pw.close();
        } catch (Exception ignored) {
        }
    }

    public static void updateStudent(Student student) {
        updateStudent(
                student.getStudentID(),
                student.getName(),
                student.getRollNo(),
                student.getDivision(),
                student.getMarks(),
                student.getAddress());
    }

    public static void deleteStudent(int studentID) {
        StringBuffer sb = new StringBuffer();
        sb.append("StudentId,Name,Roll No,Division,Marks,Address\n");
        try {
            BufferedReader br = new BufferedReader(new FileReader(filePath));
            String stream = br.readLine();
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (studentID != Integer.parseInt(data[studentsColumnOrder.indexOf("studentID")]))
                    sb.append(stream).append("\n");
            }
            br.close();
            PrintWriter pw = new PrintWriter(new FileOutputStream(filePath, false));
            pw.print(sb);
            pw.close();
        } catch (Exception ignored) {
        }
    }

    public static boolean isStudentExist(int studentID) {
        try {
            BufferedReader br = new BufferedReader(new FileReader(filePath));
            String stream = br.readLine();
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (studentID == Integer.parseInt(data[studentsColumnOrder.indexOf("studentID")])) {
                    return true;
                }
            }
            br.close();
        } catch (Exception ignored) {
        }
        return false;
    }

    private static int getStudentIDByGivenStr(String givenStr, String compareWith, boolean recursiveSearch) {
        try {
            BufferedReader br = new BufferedReader(new FileReader(filePath));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");

                boolean isRecursiveMatchFound = Arrays
                        .asList(data[studentsColumnOrder.indexOf(compareWith)].toLowerCase()
                                .split(" "))
                        .contains(givenStr.toLowerCase());

                boolean isNonRecursiveMatchFound = Objects.equals(givenStr.toLowerCase(),
                        data[studentsColumnOrder.indexOf(compareWith)].toLowerCase());

                if (isNonRecursiveMatchFound || (recursiveSearch && isRecursiveMatchFound)) {
                    br.close();
                    return Integer.parseInt(data[studentsColumnOrder.indexOf("studentID")]);
                }
            }
            br.close();
        } catch (Exception ignored) {
        }
        return -1;
    }

    public static int getStudentIDByRollNo(int rollNo) {
        return getStudentIDByGivenStr(String.valueOf(rollNo), "rollNo", false);
    }

    public static int getStudentIDByName(String name) {
        return getStudentIDByGivenStr(name, "name", true);
    }

    public static int getNewStudentID() {
        try {
            BufferedReader br = new BufferedReader(new FileReader(filePath));
            String stream = br.readLine();
            String[] data = new String[0];
            while ((stream = br.readLine()) != null) {
                data = stream.split(",");
            }
            return Integer.parseInt(data[0]) + 1;
        } catch (Exception ignored) {
        }
        return 1;
    }

    public static void printAllStudents() {
        List<String> header = new ArrayList<>();
        header.add("Student ID");
        header.add("Name");
        header.add("Roll No");
        header.add("Division");
        header.add("Marks");
        header.add("Address");

        List<List<String>> studentData = new ArrayList<>();
        try {
            BufferedReader br = new BufferedReader(new FileReader(filePath));
            String stream = br.readLine();
            while ((stream = br.readLine()) != null) {
                studentData.add(Arrays.asList(stream.split(",")));
            }
            br.close();
        } catch (Exception ignored) {
        }
        TableFormat.show(header, studentData);
    }
}
