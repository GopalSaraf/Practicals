package Helper;

import Helper.GUIHelper.Constants;
import Helper.GUIHelper.MyMouseListener;
import Helper.GUIHelper.PageChangeListener;

import javax.swing.*;

public class LoginPage extends JFrame {
    private JPanel LoginPage;
    private JPanel upper_left;
    private JPanel upper_right;
    private JPanel lower_right;
    private JLabel logo;
    private JTextField accNoTF;
    private JPasswordField passwordPF;
    private JLabel forgetPassword;
    private JButton loginBtn;
    private JLabel createAccount;
    private JPanel lower_left;
    private JLabel errorMsg;
    private JLabel userIcon;
    private JLabel passIcon;
    private JLabel forgetUsername;

    public LoginPage() {
        init();
        addActionListeners();
        addKeyListeners();
        addMouseListeners();
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
        createAccount.addMouseListener(new PageChangeListener(this, "create"));
    }

    private void addKeyListeners() {
    }

    private void addMouseListeners() {
        loginBtn.addMouseListener(new MyMouseListener());
        createAccount.addMouseListener(new MyMouseListener());
    }

    private void createUIComponents() {
        logo = new JLabel(new ImageIcon("images/bank_300.png"));
        userIcon = new JLabel(new ImageIcon("images/logos/user.png"));
        passIcon = new JLabel(new ImageIcon("images/logos/password.png"));
    }
}
