package Helper.CustomerHelper;

import Accounts.Account;
import Helper.GUIHelper.Constants;
import Helper.GUIHelper.MyMouseListener;
import Helper.MainPage;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class LoggedInPage extends JFrame {
    private JLabel logo;
    private JPanel LoggedInPage;
    private JLabel welcomeMsg;
    private JButton logoutBtn;
    private JButton updateProfileBtn;
    private JButton depositBtn;
    private JButton transferBtn;
    private JButton homeBtn;
    private JPanel header;
    private JPanel options;
    private JPanel workingPanel;
    private JPanel homePanel;
    private JPanel transferPanel;
    private JPanel depositpanel;
    private JPanel withdrawPanel;
    private JPanel balancePanel;
    private JPanel profilePanel;
    private JPanel statementPanel;
    private JPanel updatePanel;
    private JTextPane instructions;
    private JPanel transferInitial;
    private JPanel transferFinal;
    private JTextField accNoTF;
    private JComboBox transferMode;
    private JTextField mobileTF;
    private JLabel errorMsg;
    private JButton loginBtn;
    private JLabel mobileLabel;
    private JLabel mobileColon;
    private JLabel accLabel;
    private JLabel accColon;
    private JButton withdrawBtn;
    private JButton balanceBtn;
    private JScrollPane scroller;
    private JButton profileBtn;
    private JButton ststementBtn;
    private final Account account;

    public LoggedInPage(Account account) {
        this.account = account;
        init();
        addActionListeners();
        addKeyListeners();
        addMouseListeners();
        addFocusListeners();
    }

    private void init() {
        setContentPane(LoggedInPage);
        setTitle(account.getName() + " - Login");
        setSize(Constants.windowWidth, Constants.windowHeight);
        setResizable(Constants.resizableWindow);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        setVisible(true);
        welcomeMsg.setText("Welcome, " + account.getName() + ".");
    }

    private void addActionListeners() {
        homeBtn.addActionListener(new MyAction(homePanel));
        transferBtn.addActionListener(new MyAction(transferPanel));
        depositBtn.addActionListener(new MyAction(depositpanel));
        loginBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                int mode = transferMode.getSelectedIndex();
                if (mode == 0) {
                    errorMsg.setText("ERROR : Select Transfer Mode.");
                }
            }
        });
        transferMode.addActionListener(e -> {
            int mode = transferMode.getSelectedIndex();
            if (mode == 1) {
                mobileLabel.setEnabled(false);
                mobileColon.setEnabled(false);
                mobileTF.setEnabled(false);
                accLabel.setEnabled(true);
                accColon.setEnabled(true);
                accNoTF.setEnabled(true);
            } else if (mode == 2) {
                accLabel.setEnabled(false);
                accColon.setEnabled(false);
                accNoTF.setEnabled(false);
                mobileLabel.setEnabled(true);
                mobileColon.setEnabled(true);
                mobileTF.setEnabled(true);
            }
        });
        loginBtn.addActionListener(new MyAction(transferFinal));
        withdrawBtn.addActionListener(new MyAction(withdrawPanel));
        balanceBtn.addActionListener(new MyAction(balancePanel));
        logoutBtn.addActionListener(e -> {
            new MainPage().setVisible(true);
            dispose();
        });
    }

    private void addKeyListeners() {

    }

    private void addMouseListeners() {
        MyMouseListener labelMouseListener = new MyMouseListener(
                new Color(118, 84, 154), new Color(54, 24, 90), 12, 13);
        MyMouseListener btnMouseListener = new MyMouseListener(
                new Color(147, 125, 250), new Color(54, 24, 90), 16, 18);

        homeBtn.addMouseListener(btnMouseListener);
        transferBtn.addMouseListener(btnMouseListener);
        depositBtn.addMouseListener(btnMouseListener);
        withdrawBtn.addMouseListener(btnMouseListener);
        balanceBtn.addMouseListener(btnMouseListener);
        profileBtn.addMouseListener(btnMouseListener);
        ststementBtn.addMouseListener(btnMouseListener);
        updateProfileBtn.addMouseListener(btnMouseListener);
        logoutBtn.addMouseListener(btnMouseListener);
    }

    private void addFocusListeners() {
    }

    private void changeWorkingPanel(JPanel panel) {
        workingPanel.removeAll();
        workingPanel.add(panel);
        workingPanel.repaint();
        workingPanel.revalidate();
    }

    private void createUIComponents() {
        logo = new JLabel(new ImageIcon("images/bank_150.png"));
    }

    private class MyAction implements ActionListener {

        JPanel panel;

        MyAction(JPanel panel) {
            this.panel = panel;
        }

        @Override
        public void actionPerformed(ActionEvent e) {
            changeWorkingPanel(panel);
        }

    }
}
