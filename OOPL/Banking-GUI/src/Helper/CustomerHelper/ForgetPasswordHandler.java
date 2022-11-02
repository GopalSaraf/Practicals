package Helper.CustomerHelper;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;

public class ForgetPasswordHandler {

    private final Map<Character, String> questions = new HashMap<>();
    private final Map<Character, String> allQuestions = new HashMap<>();

    public static String separator = "&";

    public ForgetPasswordHandler() {
        setQuestions();
    }

    private void setQuestions() {
        questions.put('a', "What is your mother's maiden name?");
        questions.put('b', "What was the model of your first car?");
        questions.put('c', "In what city were you born?");
        questions.put('d', "On what street did you grow up?");
        questions.put('e', "What was the name of your high school?");
        questions.put('f', "What was your high school mascot?");
        questions.put('g', "What was the name teacher?");
        questions.put('h', "Where's the first place you spent a vacation?");
        questions.put('i', "What was the name of your first pet?");
        questions.put('j', "What is your favorite sports team?");
        questions.put('k', "What is your favorite movie?");
        questions.put('l', "What is your closest sibling's name?");
        questions.put('m', "What is your favorite food?");
        questions.put('n', "Name of your first boyfriend/girlfriend?");
        questions.put('o', "Paternal/maternal grandmother's first name?");
        allQuestions.putAll(questions);
    }

    public ArrayList<String> getQuestions() {
        ArrayList<String> questionsArray = new ArrayList<>();
        for (Map.Entry<Character, String> question : questions.entrySet()) {
            questionsArray.add(question.getValue() + "\n");
        }
        return questionsArray;
    }

    public void removeQus(char qusID) {
        questions.remove(qusID);
    }

    public void removeQus(String questionStr) {
        questions.remove(getIDByQuestion(questionStr));
    }

    public String getQuestionByID(char qusID) {
        if (allQuestions.containsKey(qusID))
            return allQuestions.get(qusID);
        return "";
    }

    public char getIDByQuestion(String questionStr) {
        for (Map.Entry<Character, String> question : allQuestions.entrySet()) {
            if (Objects.equals(question.getValue(), questionStr)) return question.getKey();
        }
        return ' ';
    }
}
