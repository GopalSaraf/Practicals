package Helper;

import Database.AccountsDatabase;
import Helper.CustomerHelper.LoggedInPage;
import Helper.GUIHelper.*;

import javax.swing.*;
import java.awt.*;
import java.util.Objects;

public class LoginPage extends JFrame {
    private JPanel LoginPage;
    private JPanel upper_left;
    private JPanel upper_right;
    private JPanel lower_right;
    private JLabel logo;
    private JTextField usernameOrAccNoTF;
    private JPasswordField passwordPF;
    private JLabel forgetPassword;
    private JButton loginBtn;
    private JLabel createAccount;
    private JPanel lower_left;
    private JLabel errorMsg;
    private JLabel userIcon;
    private JLabel passIcon;
    private JLabel forgetUsername;
    private int accNo;

    public LoginPage() {
        init();
        addActionListeners();
        addKeyListeners();
        addMouseListeners();
        addFocusListeners();
    }

    private void init() {
        setContentPane(LoginPage);
        setTitle("Login");
        setSize(Constants.windowWidth, Constants.windowHeight);
        setResizable(Constants.resizableWindow);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        setVisible(true);
    }

    private void addActionListeners() {
        loginBtn.addActionListener(e -> {
            if (isFieldsValid()) {
                errorMsg.setText("");
                new LoggedInPage(Objects.requireNonNull(AccountsDatabase.getAccount(accNo))).setVisible(true);
                dispose();
            } else {
                errorMsg.setText(getErrorMsg());
            }
        });
    }

    private void addKeyListeners() {
        loginBtn.addKeyListener(new MyKeyListener());
    }

    private void addMouseListeners() {
        MyMouseListener labelMouseListener = new MyMouseListener(
                new Color(118, 84, 154), new Color(54, 24, 90), 12, 13);
        MyMouseListener btnMouseListener = new MyMouseListener(
                new Color(118, 84, 154), new Color(54, 24, 90), 20, 22);
        loginBtn.addMouseListener(btnMouseListener);
        createAccount.addMouseListener(labelMouseListener);
        forgetUsername.addMouseListener(labelMouseListener);
        forgetPassword.addMouseListener(labelMouseListener);

        createAccount.addMouseListener(new PageChangeListener(this, PageChangeListener.Page.CREATE_ACC_PAGE));
    }

    private void addFocusListeners() {
        usernameOrAccNoTF.addFocusListener(new MyTextFieldFocusListener("Username OR Account Number"));
    }

    private boolean isFieldsValid() {
        String usernameOrAccNo = getUsernameOrAccNoFromUser();
        if (!usernameOrAccNo.matches("[0-9]+")) {
            accNo = AccountsDatabase.getAccNoByUsername(usernameOrAccNo);
            if (accNo == -1) return false;
        } else {
            accNo = Integer.parseInt(usernameOrAccNo);
            boolean isAccExist = AccountsDatabase.isAccountExist(accNo);
            if (!isAccExist) {
                accNo = -1;
                return false;
            }
        }

        String dbPassword = AccountsDatabase.getPasswordForAcc(accNo);
        return getPasswordFromUser().equals(dbPassword);
    }

    private String getErrorMsg() {
        String usernameOrAccNo = getUsernameOrAccNoFromUser();
        if (accNo == -1) {
            if (usernameOrAccNo.matches("[0-9]+"))
                return "ERROR : No account exist with given account number.";
            else
                return "ERROR : No account exist with given username.";
        }
        return "ERROR : Invalid password entered.";
    }

    private String getUsernameOrAccNoFromUser() {
        return usernameOrAccNoTF.getText();
    }

    private String getPasswordFromUser() {
        return String.valueOf(passwordPF.getPassword());
    }

    private void createUIComponents() {
        logo = new JLabel(new ImageIcon("images/bank_300.png"));
        userIcon = new JLabel(new ImageIcon("images/logos/user.png"));
        passIcon = new JLabel(new ImageIcon("images/logos/password.png"));
    }
}
