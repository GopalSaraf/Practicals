package Accounts;

import Database.AccountsDatabase;
import Database.TransactionsDatabase;
import Helper.BankHelper.Transactions.Transaction;
import Helper.CustomerHelper.ForgetPasswordHandler;
import Helper.CustomerHelper.Valid;
import Helper.GUIHelper.*;
import Helper.MainPage;

import javax.swing.*;
import java.awt.*;
import java.awt.event.FocusAdapter;
import java.awt.event.FocusEvent;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.Objects;

public class CreateAccount extends JFrame {
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
    private JPanel finalPage;
    private JLabel accCreatedMsg;
    private JLabel accNo;
    private JLabel minAmt;
    private JTextField balance;
    private JPanel finalInfo;
    private JButton homepageBtn;
    private JLabel congrats;
    private ForgetPasswordHandler forgetPasswordHandler;
    private String forgetPasswordIDs;
    private String forgetPasswordAns;
    private Account account;

    public CreateAccount() {
        init();
        addActionListeners();
        addKeyListeners();
        addMouseListeners();
        addFocusListeners();
    }

    private void init() {
        setContentPane(createAccount);
        setTitle("Create Account");
        setSize(Constants.windowWidth, Constants.windowHeight);
        setResizable(Constants.resizableWindow);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        setVisible(true);
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
                askQuestions();
                changeWorkingPanel(lower_left, forgetInfo);
                changeWorkingPanel(lower_right, forget);
                nextError.setText("");
            } else {
                nextError.setText(getNextFieldsErrorMsg());
            }
        });
        submitBtn.addActionListener(e -> {
            if (isForgetPasswordPageValid()) {
                setForgetPasswordIDsAndAns();
                createAccount();
                congrats.setText("Congratulations, " + account.getName());
                accCreatedMsg.setText("Your " + account.type() + " account is created successfully.");
                accNo.setText(String.valueOf(account.getAccountNo()));
                minAmt.setText("(Minimum " + account.getMinBalance() + ")");

                changeWorkingPanel(lower_left, finalInfo);
                changeWorkingPanel(lower_right, finalPage);
            } else {
                questionError.setText("ERROR : Please complete all fields.");
            }
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

        homepageBtn.addActionListener(e -> {
            double amt;
            try {
                amt = Double.parseDouble(getBalanceFromUser());
                if (amt < account.getMinBalance())
                    minAmt.setForeground(new Color(191, 23, 13));
                else {
                    account.setBalance(amt);
                    AccountsDatabase.addAccount(account);
                    TransactionsDatabase.addTransaction(new Transaction(account.getAccountNo(), LocalDateTime.now(),
                            Transaction.FIRST_DEPOSIT, amt, 0, account.getBalance(),
                            Transaction.SUCCESS, " "));
                    showAndDispose(new MainPage());
                }
            } catch (Exception ignored) {
                minAmt.setForeground(new Color(191, 23, 13));
            }
        });
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
        homepageBtn.addKeyListener(myKeyListener);
    }

    private void addMouseListeners() {
        MyMouseListener labelMouseListener = new MyMouseListener(
                new Color(118, 84, 154), new Color(54, 24, 90), 12, 13);
        MyMouseListener btnMouseListener = new MyMouseListener(
                new Color(118, 84, 154), new Color(54, 24, 90), 20, 22);
        basicToNextBtn.addMouseListener(btnMouseListener);
        nextToNextBtn.addMouseListener(btnMouseListener);
        submitBtn.addMouseListener(btnMouseListener);
        nextToBasicBtn.addMouseListener(btnMouseListener);
        forgetToNextBtn.addMouseListener(btnMouseListener);
        login1.addMouseListener(labelMouseListener);
        login2.addMouseListener(labelMouseListener);
        login3.addMouseListener(labelMouseListener);
        homepageBtn.addMouseListener(btnMouseListener);

        PageChangeListener pageChangeListener = new PageChangeListener(this, PageChangeListener.Page.LOGIN_PAGE);
        login1.addMouseListener(pageChangeListener);
        login2.addMouseListener(pageChangeListener);
        login3.addMouseListener(pageChangeListener);
    }

    private void addFocusListeners() {
        MyTextFieldFocusListener focusListener = new MyTextFieldFocusListener();
        nameTF.addFocusListener(focusListener.setText("Name"));
        mobileTF.addFocusListener(focusListener.setText("Mobile Number"));
        emailTF.addFocusListener(focusListener.setText("Email"));
        usernameTF.addFocusListener(focusListener.setText("Username"));
        answer1TF.addFocusListener(focusListener.setText("Answer"));
        answer2TF.addFocusListener(focusListener.setText("Answer"));
        answer3TF.addFocusListener(focusListener.setText("Answer"));
        balance.addFocusListener(focusListener.setText("Amount"));

        answer1TF.addFocusListener(new FocusAdapter() {
            @Override
            public void focusGained(FocusEvent e) {
                question2.setEnabled(true);
                askQuestions();
            }
        });

        answer2TF.addFocusListener(new FocusAdapter() {
            @Override
            public void focusGained(FocusEvent e) {
                question3.setEnabled(true);
                askQuestions();
            }
        });
    }

    private void changeWorkingPanel(JPanel mainPanel, JPanel panel) {
        mainPanel.removeAll();
        mainPanel.add(panel);
        mainPanel.repaint();
        mainPanel.revalidate();
    }

    private boolean isBasicFieldsValid() {
        if (getNameFromUser().equals("Name"))
            return false;
        if (getDOBFromUser().equals("Day Month, Year"))
            return false;
        if (getMobileFromUser().equals("Mobile Number"))
            return false;
        if (getEmailFromUser().equals("Email"))
            return false;

        boolean isNameValid = Valid.isValidName(getNameFromUser());
        boolean isMobileValid = Valid.isValidMobile(getMobileFromUser());
        boolean isEmailValid = Valid.isValidMail(getEmailFromUser());
        return isNameValid && isMobileValid && isEmailValid;
    }

    private String getBasicFieldsErrorMsg() {
        String errorMsg = "ERROR : ";
        if (!Valid.isValidName(getNameFromUser()) || getNameFromUser().equals("Name"))
            errorMsg += "Name, ";
        if (getDOBFromUser().equals("Day Month, Year"))
            errorMsg += "Date of Birth, ";
        if (!Valid.isValidMobile(getMobileFromUser()) || getMobileFromUser().equals("Mobile Number"))
            errorMsg += "Mobile Number, ";
        if (!Valid.isValidMail(getEmailFromUser()) || getEmailFromUser().equals("Email"))
            errorMsg += "Email, ";
        return errorMsg.substring(0, errorMsg.length() - 2);
    }

    private boolean isNextFieldsValid() {
        if (getAccTypeFromUser().equals("Type"))
            return false;
        if (getUsernameFromUser().equals("Username"))
            return false;

        boolean isUsernameValid = Valid.isValidUsername(getUsernameFromUser());
        boolean isPasswordValid = Valid.isValidPassword(getPasswordFromUser());
        boolean isPasswordConfirmed = getConfirmPasswordFromUser().equals(getPasswordFromUser());

        return isUsernameValid && isPasswordValid && isPasswordConfirmed;
    }

    private String getNextFieldsErrorMsg() {
        String errorMsg = "ERROR : ";
        boolean typeError = getAccTypeFromUser().equals("Type");
        boolean usernameError = !Valid.isValidUsername(getUsernameFromUser())
                || getUsernameFromUser().equals("Username");
        boolean passwordError = !Valid.isValidPassword(getPasswordFromUser());

        if (typeError || usernameError || passwordError) {
            if (typeError)
                errorMsg += "Type, ";
            if (usernameError)
                errorMsg += "Username, ";
            if (passwordError)
                errorMsg += "Password, ";
        } else if (!getConfirmPasswordFromUser().equals(getPasswordFromUser())) {
            errorMsg += "Password and Confirm Password not matching. ";
        }
        return errorMsg.substring(0, errorMsg.length() - 2);
    }

    private boolean isForgetPasswordPageValid() {
        if (question1.getSelectedIndex() == 0 ||
                question2.getSelectedIndex() == 0 ||
                question3.getSelectedIndex() == 0)
            return false;
        if (answer1TF.getText().equals("Answer") || answer1TF.getText().equals(""))
            return false;
        if (answer2TF.getText().equals("Answer") || answer2TF.getText().equals(""))
            return false;
        return !answer3TF.getText().equals("Answer") && !answer3TF.getText().equals("");
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
        forgetPasswordAns += answer1TF.getText().trim();
        forgetPasswordAns += ForgetPasswordHandler.separator;
        forgetPasswordAns += answer2TF.getText().trim();
        forgetPasswordAns += ForgetPasswordHandler.separator;
        forgetPasswordAns += answer3TF.getText().trim();
    }

    private char getIDByQuestion(JComboBox<String> question) {
        String questionStr = (String) question.getSelectedItem();
        assert questionStr != null;
        questionStr = questionStr.substring(0, questionStr.length() - 1);
        return forgetPasswordHandler.getIDByQuestion(questionStr);
    }

    private void createAccount() {
        DateTimeFormatter DATE_TIME_FORMATTER = DateTimeFormatter.ofPattern("dd MMM, yyyy HH:mm");
        String dateTime = LocalDateTime.now().format(DATE_TIME_FORMATTER);

        if (Objects.equals(getAccTypeFromUser(), Account.SAVING))
            account = new SavingAccount(getNameFromUser(), getDOBFromUser(), getMobileFromUser(), getEmailFromUser(),
                    0);
        else if (Objects.equals(getAccTypeFromUser(), Account.CURRENT)) {
            account = new CurrentAccount(getNameFromUser(), getDOBFromUser(), getMobileFromUser(), getEmailFromUser(),
                    0);
        }
        account.setUsername(getUsernameFromUser());
        account.setPassword(getPasswordFromUser());
        account.setForgotPasswordIDs(forgetPasswordIDs);
        account.setForgotPasswordAns(forgetPasswordAns);
        account.setOpeningDateTime(dateTime);
        account.generateAccNo();
    }

    private void showAndDispose(JFrame jFrame) {
        jFrame.setVisible(true);
        dispose();
    }

    private String getNameFromUser() {
        return nameTF.getText().trim();
    }

    private String getDOBFromUser() {
        return dayTF.getSelectedItem() + " " + monthTF.getSelectedItem() + ", " + yearTF.getSelectedItem();
    }

    private String getMobileFromUser() {
        return mobileTF.getText().trim();
    }

    private String getEmailFromUser() {
        return emailTF.getText().trim();
    }

    private String getAccTypeFromUser() {
        return (String) accTypeTF.getSelectedItem();
    }

    private String getUsernameFromUser() {
        return usernameTF.getText().trim();
    }

    private String getPasswordFromUser() {
        return String.valueOf(passwordTF.getPassword());
    }

    private String getConfirmPasswordFromUser() {
        return String.valueOf(confirmPassTF.getPassword());
    }

    private String getBalanceFromUser() {
        return balance.getText().trim();
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
