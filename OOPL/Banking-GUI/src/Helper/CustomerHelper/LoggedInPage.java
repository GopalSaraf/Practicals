package Helper.CustomerHelper;

import Accounts.Account;
import Database.AccountsDatabase;
import ExceptionHandling.AccountNotFoundException;
import ExceptionHandling.BankException;
import ExceptionHandling.InvalidFieldException;
import Helper.BankHelper.Transactions;
import Helper.BankHelper.Transactions.Transaction;
import Helper.GUIHelper.Constants;
import Helper.GUIHelper.MyMouseListener;
import Helper.GUIHelper.MyTextFieldFocusListener;
import Helper.GUIHelper.PageChangeListener;

import javax.swing.*;
import java.awt.*;

public class LoggedInPage extends JFrame {
    private JLabel logo;
    private JPanel LoggedInPage;
    private JLabel welcomeMsg;
    private JButton logoutBtn;
    private JButton updateProfilePageBtn;
    private JButton depositPageBtn;
    private JButton transferPageBtn;
    private JButton homePageBtn;
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
    private JTextField transferAccNoTF;
    private JComboBox transferMode;
    private JTextField transferMobileTF;
    private JLabel errorMsg;
    private JButton transferNextBtn;
    private JLabel mobileLabel;
    private JLabel mobileColon;
    private JLabel accLabel;
    private JLabel accColon;
    private JButton withdrawPageBtn;
    private JButton balancePageBtn;
    private JButton profilePageBtn;
    private JButton statementPageBtn;
    private JTextField transferRecName;
    private JTextField transferAmtTF;
    private JTextField transferNoteTF;
    private JButton transferBtn;
    private JLabel transferError;
    private final Account account;
    private Account transferRecAcc;

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
        homePageBtn.addActionListener(e -> changeWorkingPanel(homePanel));
        transferPageBtn.addActionListener(e -> changeWorkingPanel(transferPanel));
        depositPageBtn.addActionListener(e -> changeWorkingPanel(depositpanel));
        withdrawPageBtn.addActionListener(e -> changeWorkingPanel(withdrawPanel));
        balancePageBtn.addActionListener(e -> changeWorkingPanel(balancePanel));
        logoutBtn.addActionListener(new PageChangeListener(this, PageChangeListener.HOMEPAGE));

        transferActionListeners();
    }

    private void transferActionListeners() {
        transferNextBtn.addActionListener(e -> {
            try {
                transferRecAcc = getTransferReceiverAcc();
                errorMsg.setText("");
                transferRecName.setText(transferRecAcc.getName());
                changeWorkingPanel(transferPanel, transferFinal);
            } catch (BankException exception) {
                errorMsg.setText("ERROR : " + exception.getMessage());
            }
        });

        transferBtn.addActionListener(e -> {
            Transaction transferTransaction =
                    Transactions.transfer(account, transferRecAcc, transferAmtTF.getText().trim(),
                            transferNoteTF.getText().trim().equals("Note") ? " " : transferNoteTF.getText().trim());

            if (transferTransaction.status.startsWith(Transaction.FAIL))
                transferError.setText(transferTransaction.getErrorMsg());
            else {
                String msgToShow = "Transferred ";
                msgToShow += Transactions.currency(transferAmtTF.getText().trim());
                msgToShow += " to ";
                msgToShow += transferRecAcc.toString();
                JOptionPane.showMessageDialog(this, msgToShow, "Transfer Complete",
                        JOptionPane.INFORMATION_MESSAGE, new ImageIcon("images/bank_100.png"));
                changeWorkingPanel(homePanel);
                resetTransferPage();
            }
        });

        transferMode.addActionListener(e -> {
            int mode = transferMode.getSelectedIndex();
            if (mode == 1) {
                transferMobileTF.setText("Mobile Number");
                mobileLabel.setEnabled(false);
                mobileColon.setEnabled(false);
                transferMobileTF.setEnabled(false);
                accLabel.setEnabled(true);
                accColon.setEnabled(true);
                transferAccNoTF.setEnabled(true);
            } else if (mode == 2) {
                transferAccNoTF.setText("Account Number");
                accLabel.setEnabled(false);
                accColon.setEnabled(false);
                transferAccNoTF.setEnabled(false);
                mobileLabel.setEnabled(true);
                mobileColon.setEnabled(true);
                transferMobileTF.setEnabled(true);
            }
        });
    }

    private void addKeyListeners() {

    }

    private void addMouseListeners() {
        MyMouseListener basicBtnMouseListener = new MyMouseListener(
                new Color(147, 125, 250), new Color(54, 24, 90), 16, 18);

        homePageBtn.addMouseListener(basicBtnMouseListener);
        transferPageBtn.addMouseListener(basicBtnMouseListener);
        depositPageBtn.addMouseListener(basicBtnMouseListener);
        withdrawPageBtn.addMouseListener(basicBtnMouseListener);
        balancePageBtn.addMouseListener(basicBtnMouseListener);
        profilePageBtn.addMouseListener(basicBtnMouseListener);
        statementPageBtn.addMouseListener(basicBtnMouseListener);
        updateProfilePageBtn.addMouseListener(basicBtnMouseListener);
        logoutBtn.addMouseListener(basicBtnMouseListener);

        MyMouseListener btnMouseListener = new MyMouseListener(
                new Color(118, 84, 154), new Color(54, 24, 90), 20, 22);

        transferNextBtn.addMouseListener(btnMouseListener);
        transferBtn.addMouseListener(btnMouseListener);
    }

    private void addFocusListeners() {
        MyTextFieldFocusListener focusListener = new MyTextFieldFocusListener();
        transferAccNoTF.addFocusListener(focusListener.setText("Account Number"));
        transferMobileTF.addFocusListener(focusListener.setText("Mobile Number"));
        transferAmtTF.addFocusListener(focusListener.setText("Amount"));
        transferNoteTF.addFocusListener(focusListener.setText("Note"));
    }

    private void changeWorkingPanel(JPanel mainPanel, JPanel panel) {
        mainPanel.removeAll();
        mainPanel.add(panel);
        mainPanel.repaint();
        mainPanel.revalidate();
    }

    private void changeWorkingPanel(JPanel panel) {
        changeWorkingPanel(workingPanel, panel);
    }

    private Account getTransferReceiverAcc() throws BankException {
        int accNoOfRec = 0;
        if (transferMode.getSelectedIndex() == 0)
            throw new InvalidFieldException("Select Transfer Mode");

        if (transferMode.getSelectedIndex() == 1) {
            String accNoStr = transferAccNoTF.getText().trim();
            if (accNoStr.equals("Account Number"))
                throw new InvalidFieldException("Enter account number");
            if (!accNoStr.matches("[0-9]+"))
                throw new InvalidFieldException("Enter correct account number");
            if (accNoStr.equals(String.valueOf(account.getAccountNo())))
                throw new InvalidFieldException("You can't transfer to yourself");
            accNoOfRec = Integer.parseInt(accNoStr);
            if (!AccountsDatabase.isAccountExist(accNoOfRec))
                throw new AccountNotFoundException("No account with given account number");
        }

        if (transferMode.getSelectedIndex() == 2) {
            String mobileNo = transferMobileTF.getText().trim();
            if (mobileNo.equals("Mobile Number"))
                throw new InvalidFieldException("Enter mobile number");
            if (!Valid.isValidMobile(mobileNo))
                throw new InvalidFieldException("Enter correct mobile number");
            if (mobileNo.equals(account.getMobileNo()))
                throw new InvalidFieldException("You can't transfer to yourself");
            accNoOfRec = AccountsDatabase.getAccNoByMobile(mobileNo);
            if (!AccountsDatabase.isAccountExist(accNoOfRec))
                throw new AccountNotFoundException("No account with given mobile number");
        }
        return AccountsDatabase.getAccount(accNoOfRec);
    }

    private void resetTransferPage() {
        changeWorkingPanel(transferPanel, transferInitial);
        transferRecAcc = null;
        transferMode.setSelectedIndex(0);

        transferAccNoTF.setText("Account Number");
        transferMobileTF.setText("Mobile Number");
        transferAmtTF.setText("Amount");
        transferNoteTF.setText("Note");

        mobileLabel.setEnabled(false);
        mobileColon.setEnabled(false);
        transferMobileTF.setEnabled(false);
        accLabel.setEnabled(false);
        accColon.setEnabled(false);
        transferAccNoTF.setEnabled(false);
    }

    private void createUIComponents() {
        logo = new JLabel(new ImageIcon("images/bank_150.png"));
    }
}
