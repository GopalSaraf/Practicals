package Helper.CustomerHelper;

import Accounts.Account;
import Database.AccountsDatabase;
import Helper.GUIHelper.*;
import Helper.MainPage;

import javax.swing.*;
import java.awt.*;
import java.util.Objects;

public class ForgetHandlerPage extends JFrame {
    private JPanel header;
    private JComboBox<String> forgotOption;
    private JPanel body;
    private JPanel basicPasswordBody;
    private JPanel usernameBody;
    private JButton getUsernameBtn;
    private JLabel usernameError;
    private JTextField emailOrMobile;
    private JButton homePage3Btn;
    private JPanel forgetHandler;
    private JPanel passwordBody;
    private JTextField usernameOrAccNo;
    private JComboBox<String> day;
    private JComboBox<String> month;
    private JComboBox<String> year;
    private JButton homePageBtn;
    private JButton basicToNextBtn;
    private JPanel qnsAndAnsBody;
    private JPanel resetPassBody;
    private JButton resetPassBtn;
    private JLabel questionError;
    private JLabel queIcon1;
    private JLabel queIcon2;
    private JLabel queIcon3;
    private JLabel ansIcon1;
    private JLabel ansIcon2;
    private JLabel ansIcon3;
    private JButton homePage2Btn;
    private JPasswordField confirmPass;
    private JLabel passIcon;
    private JLabel confirmPassIcon;
    private JLabel userIcon;
    private JLabel dobIcon;
    private JLabel userIcon2;
    private JLabel usernameShow;
    private JLabel accountNoShow;
    private JLabel noAccError;
    private JTextField qus1;
    private JTextField ans1;
    private JTextField qus2;
    private JTextField ans2;
    private JTextField qus3;
    private JTextField ans3;
    private JButton resetPasswordBtn;
    private JLabel passError;
    private JPasswordField pass;
    private JLabel dobIcon2;
    private Account account;

    public ForgetHandlerPage() {
        init();
        addActionListeners();
        addKeyListeners();
        addMouseListeners();
        addFocusListeners();
    }

    public ForgetHandlerPage(DEFAULT option) {
        this();
        forgotOption.setSelectedIndex(option == DEFAULT.PASSWORD ? 0 : 1);
        changeWorkingPanel(passwordBody, basicPasswordBody);
        changeWorkingPanel(option == DEFAULT.PASSWORD ? passwordBody : usernameBody);
    }

    private void init() {
        setContentPane(forgetHandler);
        setTitle("Forgot Password / Username");
        setSize(Constants.windowWidth, Constants.windowHeight);
        setResizable(Constants.resizableWindow);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        setVisible(true);
    }

    private void addActionListeners() {
        forgotOption.addActionListener(e -> {
            if (forgotOption.getSelectedIndex() == 0)
                changeWorkingPanel(basicPasswordBody);
            else
                changeWorkingPanel(usernameBody);
        });

        getUsernameBtn.addActionListener(e -> {
            String mailOrMobile = getEmailOrMobileFromUser();
            int accNo;
            if (mailOrMobile.matches("[0-9]+"))
                accNo = AccountsDatabase.getAccNoByMobile(mailOrMobile);
            else
                accNo = AccountsDatabase.getAccNoByEmail(mailOrMobile);
            if (accNo == -1) {
                usernameShow.setText("");
                accountNoShow.setText("");
                usernameError.setText("ERROR : No account found with given information");
            } else {
                usernameError.setText("");
                usernameShow.setText("Your Username : " + AccountsDatabase.getUsernameForAcc(accNo));
                accountNoShow.setText("Your Account Number : " + accNo);
            }
        });

        basicToNextBtn.addActionListener(e -> {
            String usernameOrAccNo = getUsernameOrAccNoFromUser();
            if (usernameOrAccNo.equals("Username OR Account No")
                    || (day.getSelectedIndex() * month.getSelectedIndex() * year.getSelectedIndex()) == 0) {
                noAccError.setText("No account found with given information");
                return;
            }
            int accNo;
            if (usernameOrAccNo.matches("[0-9]+"))
                accNo = Integer.parseInt(usernameOrAccNo);
            else
                accNo = AccountsDatabase.getAccNoByUsername(usernameOrAccNo);
            if (accNo != -1 && AccountsDatabase.isAccountExist(accNo)) {
                account = AccountsDatabase.getAccount(accNo);
                assert account != null;
                if (!Objects.equals(account.getDateOfBirth(), getDOBFromUser())) {
                    noAccError.setText("ERROR : Incorrect Date of Birth");
                    return;
                }
                setQuestions();
                changeWorkingPanel(passwordBody, qnsAndAnsBody);
            } else
                noAccError.setText("ERROR : No account found with given information");
        });

        resetPassBtn.addActionListener(e -> {
            if (!areAnswersCorrect()) {
                questionError.setText("ERROR : Incorrect answers.");
                return;
            }
            changeWorkingPanel(passwordBody, resetPassBody);
        });

        resetPasswordBtn.addActionListener(e -> {
            String newPassword = String.valueOf(pass.getPassword());
            String confPass = String.valueOf(confirmPass.getPassword());
            if (Valid.isValidPassword(newPassword) && newPassword.equals(confPass)) {
                AccountsDatabase.updateAccount(account.getAccountNo(), account.getUsername(), newPassword,
                        account.getName(), account.getDateOfBirth(), account.getMobileNo(), account.getEmailID());
                JOptionPane.showMessageDialog(this, "Password updated.", "Password update",
                        JOptionPane.INFORMATION_MESSAGE, new ImageIcon("images/bank_100.png"));
                new MainPage().setVisible(true);
                dispose();
            } else if (!Valid.isValidPassword(newPassword))
                passError.setText("ERROR : Invalid password.");
            else if (!newPassword.equals(confPass))
                passError.setText("ERROR : Password and Confirm Password not matching");
        });
    }

    private void addKeyListeners() {
        MyKeyListener myKeyListener = new MyKeyListener();
        homePage3Btn.addKeyListener(myKeyListener);
        getUsernameBtn.addKeyListener(myKeyListener);
        homePageBtn.addKeyListener(myKeyListener);
        basicToNextBtn.addKeyListener(myKeyListener);
        homePage2Btn.addKeyListener(myKeyListener);
    }

    private void addMouseListeners() {
        MyMouseListener btnMouseListener = new MyMouseListener(
                new Color(118, 84, 154), new Color(54, 24, 90), 20, 22);
        homePage3Btn.addMouseListener(btnMouseListener);
        getUsernameBtn.addMouseListener(btnMouseListener);
        homePageBtn.addMouseListener(btnMouseListener);
        basicToNextBtn.addMouseListener(btnMouseListener);
        homePage2Btn.addMouseListener(btnMouseListener);
        resetPassBtn.addMouseListener(btnMouseListener);

        PageChangeListener homePageChange = new PageChangeListener(this, PageChangeListener.Page.HOME_PAGE);
        homePageBtn.addMouseListener(homePageChange);
        homePage2Btn.addMouseListener(homePageChange);
        homePage3Btn.addMouseListener(homePageChange);
    }

    private void addFocusListeners() {
        MyTextFieldFocusListener textFieldFocusListener = new MyTextFieldFocusListener();

        emailOrMobile.addFocusListener(textFieldFocusListener.setText("Email OR Mobile No"));
        usernameOrAccNo.addFocusListener(textFieldFocusListener.setText("Username OR Account No"));
        ans1.addFocusListener(textFieldFocusListener.setText("Answer 1"));
        ans2.addFocusListener(textFieldFocusListener.setText("Answer 2"));
        ans3.addFocusListener(textFieldFocusListener.setText("Answer 3"));
    }

    private void setQuestions() {
        ForgetPasswordHandler forgetPasswordHandler = new ForgetPasswordHandler();
        String[] qusIDs = account.getForgotPasswordIDs().split(ForgetPasswordHandler.separator);
        qus1.setText(forgetPasswordHandler.getQuestionByID(qusIDs[0].charAt(0)));
        qus2.setText(forgetPasswordHandler.getQuestionByID(qusIDs[1].charAt(0)));
        qus3.setText(forgetPasswordHandler.getQuestionByID(qusIDs[2].charAt(0)));
    }

    private boolean areAnswersCorrect() {
        return Objects.equals(account.getForgotPasswordAns().toLowerCase(), getAnswersFromUser().toLowerCase());
    }

    private void changeWorkingPanel(JPanel mainPanel, JPanel panel) {
        mainPanel.removeAll();
        mainPanel.add(panel);
        mainPanel.repaint();
        mainPanel.revalidate();
    }

    private void changeWorkingPanel(JPanel panel) {
        changeWorkingPanel(body, panel);
    }

    private String getEmailOrMobileFromUser() {
        return emailOrMobile.getText().trim();
    }

    private String getUsernameOrAccNoFromUser() {
        return usernameOrAccNo.getText().trim();
    }

    private String getDOBFromUser() {
        return day.getSelectedItem() + " " + month.getSelectedItem() + ", " + year.getSelectedItem();
    }

    private String getAnswersFromUser() {
        return ans1.getText().trim() + ForgetPasswordHandler.separator + ans2.getText().trim()
                + ForgetPasswordHandler.separator + ans3.getText().trim();
    }

    private void createUIComponents() {
        userIcon = new JLabel(new ImageIcon("images/logos/user.png"));
        userIcon2 = new JLabel(new ImageIcon("images/logos/user.png"));
        dobIcon = new JLabel(new ImageIcon("images/logos/dob.png"));
        queIcon1 = new JLabel(new ImageIcon("images/logos/question.png"));
        queIcon2 = new JLabel(new ImageIcon("images/logos/question.png"));
        queIcon3 = new JLabel(new ImageIcon("images/logos/question.png"));
        ansIcon1 = new JLabel(new ImageIcon("images/logos/answer.png"));
        ansIcon2 = new JLabel(new ImageIcon("images/logos/answer.png"));
        ansIcon3 = new JLabel(new ImageIcon("images/logos/answer.png"));
        passIcon = new JLabel(new ImageIcon("images/logos/password.png"));
        confirmPassIcon = new JLabel(new ImageIcon("images/logos/confirmPassword.png"));
    }

    public enum DEFAULT {
        PASSWORD, USERNAME
    }
}
