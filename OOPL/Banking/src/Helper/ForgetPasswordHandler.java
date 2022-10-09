package Helper;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class ForgetPasswordHandler {

    public static class QusAnsPair {
        public char qusID;
        public String answer;

        public QusAnsPair(char qusID, String answer) {
            this.qusID = qusID;
            this.answer = answer;
        }
    }

    private static final Map<Character, String> questions = new HashMap<>();

    private static final Scanner sc = new Scanner(System.in);

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
        char questionID;
        String answer;
        System.out.println();
        System.out.println("Choose which security question (In case you forgot password) to answer.");
        System.out.println();
        for (Map.Entry<Character, String> question : questions.entrySet()) {
            System.out.println(question.getKey() + " - " + question.getValue());
        }
        System.out.println();
        System.out.print("Enter your choice > ");
        while (true) {
            questionID = sc.next().charAt(0);
            if (questions.containsKey(questionID))
                break;
            System.out.print("Enter valid choice > ");
        }
        System.out.println();
        System.out.print(questions.get(questionID) + " > ");
        sc.nextLine();
        answer = sc.nextLine();
        System.out.println();
        System.out.println("Answer saved SUCCESSFULLY.");
        return new QusAnsPair(questionID, answer);
    }

    public static String getQuestionByID(char qusID) {
        setQuestions();
        if (questions.containsKey(qusID))
            return questions.get(qusID);
        return "";
    }
}
