package Accounts;

import Helper.CustomerHelper.ForgetPasswordHandler;
import Helper.CustomerHelper.Valid;
import Helper.GUIHelper.Constants;
import Helper.GUIHelper.MyKeyListener;
import Helper.GUIHelper.MyMouseListener;
import Helper.GUIHelper.PageChangeListener;
import Helper.MainPage;

import javax.swing.*;
import java.util.Objects;

public class CreateAccount extends JFrame {

    private Account account;
    private JPanel upper_left;
    private JLabel logo;
    private JPanel upper_right;
    private JPanel middle;
    private JPanel lower_left;
    private JPanel lower_right;
    private JPanel createAccount;
    private JTextField nameTF;
    private JTextField mobileTF;
    private JTextField emailTF;
    private JButton basicToNextBtn;
    private JLabel basicError;
    private JComboBox yearTF;
    private JComboBox dayTF;
    private JComboBox monthTF;
    private JLabel nameIcon;
    private JLabel dobIcon;
    private JLabel mobileIcon;
    private JLabel emailIcon;
    private JPanel basic;
    private JPanel basicInfo;
    private JPanel nextInfo;
    private JPanel forgetInfo;
    private JPanel next;
    private JPanel forget;
    private JTextField answer2TF;
    private JButton submitBtn;
    private JTextField usernameTF;
    private JPasswordField passwordTF;
    private JPasswordField confirmPassTF;
    private JLabel accountIcon;
    private JLabel userIcon;
    private JLabel passIcon;
    private JLabel confirmPassIcon;
    private JLabel login1;
    private JButton nextToNextBtn;
    private JLabel queIcon1;
    private JLabel queIcon2;
    private JLabel queIcon3;
    private JLabel ansIcon1;
    private JLabel ansIcon2;
    private JLabel ansIcon3;
    private JLabel login2;
    private JLabel login3;
    private JComboBox accTypeTF;
    private JComboBox<String> question1;
    private JTextField answer1TF;
    private JComboBox<String> question2;
    private JComboBox<String> question3;
    private JTextField answer3TF;
    private JButton nextToBasicBtn;
    private JButton forgetToNextBtn;
    private JLabel nextError;
    private JLabel questionError;
    private ForgetPasswordHandler forgetPasswordHandler;
    private String forgetPasswordIDs;
    private String forgetPasswordAns;

    public CreateAccount() {
        init();
        addActionListeners();
        addKeyListeners();
        addMouseListeners();

    }

    private void init() {
        setContentPane(createAccount);
        setTitle("Create Account");
        setSize(Constants.windowWidth, Constants.windowHeight);
        setResizable(Constants.resizableWindow);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        setVisible(true);
        askQuestions();
    }

    private void addActionListeners() {
        basicToNextBtn.addActionListener(e -> {
            if (isBasicFieldsValid()) {
                changeWorkingPanel(lower_left, nextInfo);
                changeWorkingPanel(lower_right, next);
                basicError.setText("");
            } else {
                basicError.setText(getBasicFieldsErrorMsg());
            }
        });
        nextToNextBtn.addActionListener(e -> {
            if (isNextFieldsValid()) {
                changeWorkingPanel(lower_left, forgetInfo);
                changeWorkingPanel(lower_right, forget);
                nextError.setText("");

            } else {
                nextError.setText(getNextFieldsErrorMsg());
            }
        });
        submitBtn.addActionListener(e -> {
            setForgetPasswordIDsAndAns();
            showAndDispose(new MainPage());
        });
        nextToBasicBtn.addActionListener(e -> {
            changeWorkingPanel(lower_left, basicInfo);
            changeWorkingPanel(lower_right, basic);
        });
        forgetToNextBtn.addActionListener(e -> {
            changeWorkingPanel(lower_left, nextInfo);
            changeWorkingPanel(lower_right, next);
        });
        question1.addActionListener(e -> askQuestions());
        question2.addActionListener(e -> askQuestions());
        question3.addActionListener(e -> askQuestions());
        answer1TF.addActionListener(e -> askQuestions());
        answer2TF.addActionListener(e -> askQuestions());
    }

    private void addKeyListeners() {
        MyKeyListener myKeyListener = new MyKeyListener();
        basicToNextBtn.addKeyListener(myKeyListener);
        nextToNextBtn.addKeyListener(myKeyListener);
        submitBtn.addKeyListener(myKeyListener);
        nextToBasicBtn.addKeyListener(myKeyListener);
        forgetToNextBtn.addKeyListener(myKeyListener);
        login1.addKeyListener(myKeyListener);
        login2.addKeyListener(myKeyListener);
        login3.addKeyListener(myKeyListener);
        question1.addKeyListener(myKeyListener);
        question2.addKeyListener(myKeyListener);
        question3.addKeyListener(myKeyListener);
        answer1TF.addKeyListener(myKeyListener);
        answer2TF.addKeyListener(myKeyListener);
    }

    private void addMouseListeners() {
        MyMouseListener myMouseListener = new MyMouseListener();
        basicToNextBtn.addMouseListener(myMouseListener);
        nextToNextBtn.addMouseListener(myMouseListener);
        submitBtn.addMouseListener(myMouseListener);
        nextToBasicBtn.addMouseListener(myMouseListener);
        forgetToNextBtn.addMouseListener(myMouseListener);
        login1.addMouseListener(myMouseListener);
        login2.addMouseListener(myMouseListener);
        login3.addMouseListener(myMouseListener);

        PageChangeListener pageChangeListener = new PageChangeListener(this, "login");
        login1.addMouseListener(pageChangeListener);
        login2.addMouseListener(pageChangeListener);
        login3.addMouseListener(pageChangeListener);

    }

    private void changeWorkingPanel(JPanel mainPanel, JPanel panel) {
        mainPanel.removeAll();
        mainPanel.add(panel);
        mainPanel.repaint();
        mainPanel.revalidate();
    }

    private boolean isBasicFieldsValid() {
        if (getNameFromUser().equals("Name")) return false;
        if (getDOBFromUser().equals("Day Month, Year")) return false;
        if (getMobileFromUser().equals("Mobile Number")) return false;
        if (getEmailFromUser().equals("Email")) return false;

        boolean isNameValid = Valid.isValidName(getNameFromUser());
        boolean isMobileValid = Valid.isValidMobile(getMobileFromUser());
        boolean isEmailValid = Valid.isValidMail(getEmailFromUser());
        return isNameValid && isMobileValid && isEmailValid;
    }

    private String getBasicFieldsErrorMsg() {
        String errorMsg = "INVALID : ";
        if (!Valid.isValidName(getNameFromUser()) || getNameFromUser().equals("Name")) errorMsg += "Name, ";
        if (getDOBFromUser().equals("Day Month, Year")) errorMsg += "Date of Birth, ";
        if (!Valid.isValidMobile(getMobileFromUser()) || getMobileFromUser().equals("Mobile Number"))
            errorMsg += "Mobile Number, ";
        if (!Valid.isValidMail(getEmailFromUser()) || getEmailFromUser().equals("Email")) errorMsg += "Email, ";
        return errorMsg.substring(0, errorMsg.length() - 2);
    }

    private boolean isNextFieldsValid() {
        if (getAccTypeFromUser().equals("Type")) return false;
        if (getUsernameFromUser().equals("Username")) return false;

        boolean isUsernameValid = Valid.isValidUsername(getUsernameFromUser());
        boolean isPasswordValid = Valid.isValidPassword(getPasswordFromUser());
        boolean isPasswordConfirmed = getConfirmPasswordFromUser().equals(getPasswordFromUser());

        return isUsernameValid && isPasswordValid && isPasswordConfirmed;
    }

    private String getNextFieldsErrorMsg() {
        String errorMsg = "INVALID : ";
        boolean typeError = getAccTypeFromUser().equals("Type");
        boolean usernameError = !Valid.isValidUsername(getUsernameFromUser()) || getUsernameFromUser().equals("Username");
        boolean passwordError = !Valid.isValidPassword(getPasswordFromUser());

        if (typeError || usernameError || passwordError) {
            if (typeError) errorMsg += "Type, ";
            if (usernameError) errorMsg += "Username, ";
            if (passwordError) errorMsg += "Password, ";
        } else if (!getConfirmPasswordFromUser().equals(getPasswordFromUser())) {
            errorMsg += "Password and Confirm Password not matching. ";
        }
        return errorMsg.substring(0, errorMsg.length() - 2);
    }

    private void askQuestions() {
        forgetPasswordHandler = new ForgetPasswordHandler();
        for (String question : forgetPasswordHandler.getQuestions())
            question1.addItem(question);
        askQusHelper(question1, answer1TF, question2);
        askQusHelper(question2, answer2TF, question3);
        askQusHelper(question3, answer3TF, question3);
    }

    private void askQusHelper(JComboBox<String> questionCB, JTextField answerTF, JComboBox<String> question2CB) {
        if (questionCB.getSelectedIndex() != 0) {
            String questionStr1 = (String) questionCB.getSelectedItem();
            assert questionStr1 != null;
            questionStr1 = questionStr1.substring(0, questionStr1.length() - 1);
            answerTF.setEnabled(true);
            forgetPasswordHandler.removeQus(questionStr1);
        }
        if (!Objects.equals(answerTF.getText(), "Answer")) {
            question2CB.setEnabled(true);
            for (String question : forgetPasswordHandler.getQuestions())
                question2CB.addItem(question);
        }
    }

    private void setForgetPasswordIDsAndAns() {
        forgetPasswordIDs = "";
        forgetPasswordIDs += getIDByQuestion(question1);
        forgetPasswordIDs += ForgetPasswordHandler.separator;
        forgetPasswordIDs += getIDByQuestion(question2);
        forgetPasswordIDs += ForgetPasswordHandler.separator;
        forgetPasswordIDs += getIDByQuestion(question3);

        forgetPasswordAns = "";
        forgetPasswordAns += answer1TF.getText();
        forgetPasswordAns += ForgetPasswordHandler.separator;
        forgetPasswordAns += answer2TF.getText();
        forgetPasswordAns += ForgetPasswordHandler.separator;
        forgetPasswordAns += answer3TF.getText();
    }

    private char getIDByQuestion(JComboBox<String> question) {
        String questionStr = (String) question.getSelectedItem();
        assert questionStr != null;
        questionStr = questionStr.substring(0, questionStr.length() - 1);
        return forgetPasswordHandler.getIDByQuestion(questionStr);
    }

    private void showAndDispose(JFrame jFrame) {
        jFrame.setVisible(true);
        dispose();
    }

    private String getNameFromUser() {
        return nameTF.getText();
    }

    private String getDOBFromUser() {
        return dayTF.getSelectedItem() + " " + monthTF.getSelectedItem() + ", " + yearTF.getSelectedItem();
    }

    private String getMobileFromUser() {
        return mobileTF.getText();
    }

    private String getEmailFromUser() {
        return emailTF.getText();
    }

    private String getAccTypeFromUser() {
        return (String) accTypeTF.getSelectedItem();
    }

    private String getUsernameFromUser() {
        return usernameTF.getText();
    }

    private String getPasswordFromUser() {
        return String.valueOf(passwordTF.getPassword());
    }

    private String getConfirmPasswordFromUser() {
        return String.valueOf(confirmPassTF.getPassword());
    }

    private void createUIComponents() {
        logo = new JLabel(new ImageIcon("images/bank_300.png"));
        nameIcon = new JLabel(new ImageIcon("images/logos/name.png"));
        dobIcon = new JLabel(new ImageIcon("images/logos/dob.png"));
        mobileIcon = new JLabel(new ImageIcon("images/logos/mobile.png"));
        emailIcon = new JLabel(new ImageIcon("images/logos/email.png"));
        accountIcon = new JLabel(new ImageIcon("images/logos/account.png"));
        userIcon = new JLabel(new ImageIcon("images/logos/user.png"));
        passIcon = new JLabel(new ImageIcon("images/logos/password.png"));
        confirmPassIcon = new JLabel(new ImageIcon("images/logos/confirmPassword.png"));
        queIcon1 = new JLabel(new ImageIcon("images/logos/question.png"));
        queIcon2 = new JLabel(new ImageIcon("images/logos/question.png"));
        queIcon3 = new JLabel(new ImageIcon("images/logos/question.png"));
        ansIcon1 = new JLabel(new ImageIcon("images/logos/answer.png"));
        ansIcon2 = new JLabel(new ImageIcon("images/logos/answer.png"));
        ansIcon3 = new JLabel(new ImageIcon("images/logos/answer.png"));

    }
}
