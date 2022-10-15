package CustomerHelper;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class ForgetPasswordHandler {

    public static int minNoOfQus = 3;

    private static final Map<Character, String> questions = new HashMap<>();

    private static final Scanner sc = new Scanner(System.in);

    public static class QusAnsPair {
        public static String separator = "&";
        public String qusIDs;
        public String answers;

        public QusAnsPair(String qusIDs, String answers) {
            this.qusIDs = qusIDs;
            this.answers = answers;
        }

    }

    private static void setQuestions() {
        questions.put('a', "What is your mother's maiden name?");
        questions.put('b', "What was the make and model of your first car?");
        questions.put('c', "In what city were you born?");
        questions.put('d', "On what street did you grow up?");
        questions.put('e', "What was the name of your elementary/middle/high school?");
        questions.put('f', "What was your elementary/middle/high school mascot?");
        questions.put('g', "What was the name of your first grade teacher?");
        questions.put('h', "Where's the first place you spent a vacation?");
        questions.put('i', "What was the name of your first pet?");
        questions.put('j', "What is your favorite sports team?");
        questions.put('k', "What is your favorite movie?");
        questions.put('l', "What is your closest sibling's name?");
        questions.put('m', "What is your favorite food?");
        questions.put('n', "What is the first name of your first boyfriend/girlfriend?");
        questions.put('o', "What is your paternal/maternal grandmother's first name?");
    }

    public static QusAnsPair askQus() {
        setQuestions();
        var myQuestions = questions;
        int qusNo = 1;
        StringBuilder questionIDs = new StringBuilder();
        StringBuilder answers = new StringBuilder();
        System.out.println();

        System.out.println("Following questions are asked due to if in case you forgot password.");
        while (qusNo <= minNoOfQus) {
            var qusAndAns = askOneQus(myQuestions, qusNo);
            questionIDs.append(qusAndAns.qusIDs);
            answers.append(qusAndAns.answers);
            if (qusNo != minNoOfQus) {
                questionIDs.append(QusAnsPair.separator);
                answers.append(QusAnsPair.separator);
            }
            myQuestions.remove(qusAndAns.qusIDs.charAt(0));
            qusNo++;
        }

        char wantToContinue;
        while (true) {
            if (myQuestions.isEmpty()) break;
            System.out.println();
            System.out.print("Do you want to continue asking more questions? [Y/n] > ");
            wantToContinue = sc.next().charAt(0);

            if (wantToContinue == 'n' || wantToContinue == 'N')
                break;
            else if (wantToContinue == 'y' || wantToContinue == 'Y') {
                var qusAndAns = askOneQus(myQuestions, qusNo);
                questionIDs.append(QusAnsPair.separator).append(qusAndAns.qusIDs);
                answers.append(QusAnsPair.separator).append(qusAndAns.answers);
                myQuestions.remove(qusAndAns.qusIDs.charAt(0));
                qusNo++;
            } else {
                System.out.println();
                System.out.println("Incorrect option chosen. Try again.");
            }
        }

        return new QusAnsPair(questionIDs.toString(), answers.toString());
    }

    private static QusAnsPair askOneQus(Map<Character, String> myQuestions, int qusNo) {
        System.out.println();
        System.out.println("Choose security question " + qusNo + " > ");
        System.out.println();
        for (Map.Entry<Character, String> question : myQuestions.entrySet()) {
            System.out.println(question.getKey() + " - " + question.getValue());
        }
        System.out.println();
        System.out.print("Enter your choice > ");
        char questionID;
        while (true) {
            questionID = sc.next().charAt(0);
            if (questions.containsKey(questionID))
                break;
            System.out.print("Enter valid choice > ");
        }
        System.out.println();
        System.out.print(questions.get(questionID) + " > ");
        sc.nextLine();
        String answer = sc.nextLine();
        System.out.println();
        System.out.println("Answer saved SUCCESSFULLY.");
        return new QusAnsPair(Character.toString(questionID), answer);
    }

    public static String getQuestionByID(char qusID) {
        setQuestions();
        if (questions.containsKey(qusID))
            return questions.get(qusID);
        return "";
    }
}
