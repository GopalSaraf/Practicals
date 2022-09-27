import java.io.*;
import java.util.HashMap;
import java.util.Map;

public final class Database {
    private static final String path = "accounts.txt";
    private static final File file = new File(path);
    private static final Map<String, Integer> columns = Map.of(
            "id", 0,
            "password", 1,
            "balance", 2,
            "name", 3,
            "age", 4,
            "mobileNo", 5);
    private static final int noOfColumns = columns.size();

    public static void addAccount(int id, int password, double balance, String name, int age, String mobileNo) {
        try {
            PrintWriter pw = new PrintWriter(new FileOutputStream(file, true));
            pw.append(String.valueOf(id))
                    .append(",")
                    .append(String.valueOf(password))
                    .append(",")
                    .append(String.valueOf(balance))
                    .append(",")
                    .append(name)
                    .append(",")
                    .append(String.valueOf(age))
                    .append(",")
                    .append(mobileNo)
                    .append("\n");
            pw.close();
        } catch (Exception ignored) {
        }
    }

    public static void updateBalance(int id, double newBalance) {
        StringBuffer sb = new StringBuffer();
        try {
            BufferedReader br = new BufferedReader(new FileReader(path));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (id == Integer.parseInt(data[columns.get("id")])) {
                    StringBuilder row = new StringBuilder();
                    for (int i = 0; i < noOfColumns; i++) {
                        if (i == columns.get("balance")) {
                            row.append(newBalance).append(",");
                        } else {
                            row.append(data[i]);
                            if (!(i == noOfColumns - 1)) {
                                row.append(",");
                            }
                        }
                    }
                    sb.append(row).append("\n");
                } else {
                    sb.append(stream).append("\n");
                }
            }
            PrintWriter pw = new PrintWriter(new FileOutputStream(file, false));
            pw.print(sb);
            pw.close();
        } catch (Exception ignored) {
        }
    }

    public static Map<String, String> getAccountInfo(int id) {
        try {
            Map<String, String> accountDetails = new HashMap<>(Map.of(
                    "id", "",
                    "password", "",
                    "balance", "",
                    "name", "",
                    "age", "",
                    "mobileNo", ""));
            BufferedReader br = new BufferedReader(new FileReader(path));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (id == Integer.parseInt(data[columns.get("id")])) {
                    for (int i = 0; i < noOfColumns; i++) {
                        String key = accountDetails.keySet().toArray(new String[0])[i];
                        String value = data[columns.get(key)];
                        accountDetails.put(key, value);
                    }
                    return accountDetails;
                }
            }
        } catch (Exception ignored) {
        }
        return null;
    }
}
