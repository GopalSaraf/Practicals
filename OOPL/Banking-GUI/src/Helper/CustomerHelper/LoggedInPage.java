package Helper.CustomerHelper;

import Accounts.Account;
import Database.AccountsDatabase;
import Database.TransactionsDatabase;
import ExceptionHandling.AccountNotFoundException;
import ExceptionHandling.BankException;
import ExceptionHandling.InvalidFieldException;
import Helper.BankHelper.Transactions;
import Helper.BankHelper.Transactions.Transaction;
import Helper.GUIHelper.*;
import Helper.GUIHelper.StatementTableHelper.TableCustom;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.util.ArrayList;

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
    private JPanel depositPanel;
    private JPanel withdrawPanel;
    private JPanel balancePanel;
    private JPanel profilePanel;
    private JPanel statementPanel;
    private JPanel updatePanel;
    private JTextPane instructions;
    private JPanel transferInitial;
    private JPanel transferFinal;
    private JTextField transferAccNoTF;
    private JComboBox<String> transferMode;
    private JTextField transferMobileTF;
    private JLabel transferErrorMsg1;
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
    private JLabel transferErrorMsg2;
    private JButton cancelTransferBtn;
    private JComboBox<String> depositMode;
    private JTextField depositChequeNoTF;
    private JTextField depositNoteTF;
    private JButton depositBtn;
    private JTextField depositAmtTF;
    private JLabel depositChequeLabel;
    private JLabel depositChequeColon;
    private JButton cancelDepositBtn;
    private JLabel depositErrorMsg;
    private JTextField balanceAmtLabel;
    private JLabel withdrawErrorMsg;
    private JTextField withdrawNoteTF;
    private JTextField withdrawAmtTF;
    private JComboBox<String> withdrawMode;
    private JLabel withdrawChequeLabel;
    private JLabel withdrawChequeColon;
    private JTextField withdrawChequeNoTF;
    private JButton withdrawBtn;
    private JButton cancelWithdrawBtn;
    private JTextField profileAccNoLabel;
    private JTextField profileNameLabel;
    private JTextField profileDOBLabel;
    private JTextField profileMobileLabel;
    private JTextField profileEmailLabel;
    private JTextField profileAccTypeLabel;
    private JTextField profileUsernameLabel;
    private JTextField profileBalanceLabel;
    private JTextField profileOpenDateTimeLabel;
    private JLabel profileHeadingLabel;
    private JTable statementTable;
    private JScrollPane statementTableScroller;
    private final Account account;
    private Account transferRecAcc;
    private DefaultTableModel tableModel;



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
        TableCustom.apply(statementTableScroller, TableCustom.TableType.MULTI_LINE);
    }

    private void addActionListeners() {
        homePageBtn.addActionListener(e -> changeWorkingPanel(homePanel));
        transferPageBtn.addActionListener(e -> changeWorkingPanel(transferPanel));
        depositPageBtn.addActionListener(e -> changeWorkingPanel(depositPanel));
        withdrawPageBtn.addActionListener(e -> changeWorkingPanel(withdrawPanel));
        balancePageBtn.addActionListener(e -> changeWorkingPanel(balancePanel));
        statementPageBtn.addActionListener(e -> changeWorkingPanel(statementPanel));
        profilePageBtn.addActionListener(e -> changeWorkingPanel(profilePanel));
        logoutBtn.addActionListener(new PageChangeListener(this, PageChangeListener.HOMEPAGE));

        transferActionListeners();
        depositActionListeners();
        withdrawActionListeners();

        balancePageBtn.addActionListener(e -> {
            balanceAmtLabel.setText(Transactions.currency(account.getBalance()));
        });

        statementPageBtn.addActionListener(e -> setStatementTable());

        profilePageBtn.addActionListener(e -> setProfilePage());
    }

    private void transferActionListeners() {
        transferMode.addActionListener(e -> {
            int mode = getTransferModeIndexFromUser();
            if (mode == 0)
                resetTransferPage();
            else if (mode == 1) {
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

        transferNextBtn.addActionListener(e -> {
            try {
                transferRecAcc = getTransferReceiverAcc();
                transferErrorMsg1.setText("");
                transferRecName.setText(transferRecAcc.getName());
                changeWorkingPanel(transferPanel, transferFinal);
            } catch (BankException exception) {
                transferErrorMsg1.setText("ERROR : " + exception.getMessage());
            }
        });

        transferBtn.addActionListener(e -> {
            Transaction transferTransaction =
                    Transactions.transfer(account, transferRecAcc, getTransferAmtFromUser(), getTransferNoteFromUser());

            if (transferTransaction.status.startsWith(Transaction.FAIL))
                transferErrorMsg2.setText(transferTransaction.getErrorMsg());
            else {
                String msgToShow = "Transferred ";
                msgToShow += Transactions.currency(getTransferAmtFromUser());
                msgToShow += " to ";
                msgToShow += transferRecAcc.toString();
                msgToShow += ".";
                JOptionPane.showMessageDialog(this, msgToShow, "Transfer Complete",
                        JOptionPane.INFORMATION_MESSAGE, new ImageIcon("images/bank_100.png"));
                changeWorkingPanel(homePanel);
                resetTransferPage();
            }
        });

        cancelTransferBtn.addActionListener(e -> {
            int wantToCancel = JOptionPane.showConfirmDialog(this, "You want to cancel transfer ?",
                    "Cancel Transfer", JOptionPane.YES_NO_OPTION, JOptionPane.QUESTION_MESSAGE, new ImageIcon("images/bank_100.png"));
            if (wantToCancel == JOptionPane.YES_OPTION) {
                JOptionPane.showMessageDialog(this, "Transfer cancelled", "Transfer Cancel",
                        JOptionPane.INFORMATION_MESSAGE, new ImageIcon("images/bank_100.png"));
                changeWorkingPanel(homePanel);
                resetTransferPage();
            }
        });
    }

    private void depositActionListeners() {
        depositChequeLabel.setVisible(false);
        depositChequeColon.setVisible(false);
        depositChequeNoTF.setVisible(false);

        depositMode.addActionListener(e -> {
            if (getDepositModeIndexFromUser() == 0) {
                resetDepositPage();
            }
            if (getDepositModeIndexFromUser() == 3) {
                depositChequeLabel.setVisible(true);
                depositChequeColon.setVisible(true);
                depositChequeNoTF.setVisible(true);
                depositChequeNoTF.setText("Cheque Number");
            } else {
                depositChequeLabel.setVisible(false);
                depositChequeColon.setVisible(false);
                depositChequeNoTF.setVisible(false);
            }
        });

        depositBtn.addActionListener(e -> {
            try {
                checkDepositFields();

                Transaction depositTransaction =
                        Transactions.deposit(account, getDepositAmtFromUser(), getDepositNoteFromUser(), getDepositModeFromUser());

                if (depositTransaction.status.startsWith(Transaction.FAIL))
                    depositErrorMsg.setText(depositTransaction.getErrorMsg());
                else {
                    String msgToShow = "Deposited ";
                    msgToShow += Transactions.currency(getDepositAmtFromUser());
                    msgToShow += " in account.";
                    JOptionPane.showMessageDialog(this, msgToShow, "Deposit",
                            JOptionPane.INFORMATION_MESSAGE, new ImageIcon("images/bank_100.png"));
                    changeWorkingPanel(homePanel);
                    resetDepositPage();
                }
            } catch (BankException exception) {
                depositErrorMsg.setText("ERROR : " + exception.getMessage());
            }
        });

        cancelDepositBtn.addActionListener(e -> {
            int wantToCancel = JOptionPane.showConfirmDialog(this, "You want to cancel deposit ?",
                    "Cancel Deposit", JOptionPane.YES_NO_OPTION, JOptionPane.QUESTION_MESSAGE, new ImageIcon("images/bank_100.png"));
            if (wantToCancel == JOptionPane.YES_OPTION) {
                JOptionPane.showMessageDialog(this, "Deposit cancelled", "Deposit Cancel",
                        JOptionPane.INFORMATION_MESSAGE, new ImageIcon("images/bank_100.png"));
                changeWorkingPanel(homePanel);
                resetDepositPage();
            }
        });
    }

    private void withdrawActionListeners() {
        withdrawChequeLabel.setVisible(false);
        withdrawChequeColon.setVisible(false);
        withdrawChequeNoTF.setVisible(false);

        withdrawMode.addActionListener(e -> {
            if (getWithdrawModeIndexFromUser() == 0) {
                resetWithdrawPage();
            }
            if (getWithdrawModeIndexFromUser() == 3) {
                withdrawChequeLabel.setVisible(true);
                withdrawChequeColon.setVisible(true);
                withdrawChequeNoTF.setVisible(true);
                withdrawChequeNoTF.setText("Cheque Number");
            } else {
                withdrawChequeLabel.setVisible(false);
                withdrawChequeColon.setVisible(false);
                withdrawChequeNoTF.setVisible(false);
            }
        });

        withdrawBtn.addActionListener(e -> {
            try {
                checkWithdrawFields();

                Transaction withdrawTransaction =
                        Transactions.withdraw(account, getWithdrawAmtFromUser(), getWithdrawNoteFromUser(), getWithdrawModeFromUser());

                if (withdrawTransaction.status.startsWith(Transaction.FAIL))
                    withdrawErrorMsg.setText(withdrawTransaction.getErrorMsg());
                else {
                    String msgToShow = "Withdrawal ";
                    msgToShow += Transactions.currency(getWithdrawAmtFromUser());
                    msgToShow += " from account.";
                    JOptionPane.showMessageDialog(this, msgToShow, "Withdraw",
                            JOptionPane.INFORMATION_MESSAGE, new ImageIcon("images/bank_100.png"));
                    changeWorkingPanel(homePanel);
                    resetWithdrawPage();
                }
            } catch (BankException exception) {
                withdrawErrorMsg.setText("ERROR : " + exception.getMessage());
            }
        });

        cancelWithdrawBtn.addActionListener(e -> {
            int wantToCancel = JOptionPane.showConfirmDialog(this, "You want to cancel withdraw ?",
                    "Cancel Withdraw", JOptionPane.YES_NO_OPTION, JOptionPane.QUESTION_MESSAGE, new ImageIcon("images/bank_100.png"));
            if (wantToCancel == JOptionPane.YES_OPTION) {
                JOptionPane.showMessageDialog(this, "Withdraw cancelled", "Withdraw Cancel",
                        JOptionPane.INFORMATION_MESSAGE, new ImageIcon("images/bank_100.png"));
                changeWorkingPanel(homePanel);
                resetWithdrawPage();
            }
        });
    }

    private void addKeyListeners() {
        MyKeyListener keyListener = new MyKeyListener();

        for (JButton button : getOptionsBtns())
            button.addKeyListener(keyListener);

        transferNextBtn.addKeyListener(keyListener);
        transferBtn.addKeyListener(keyListener);
        cancelTransferBtn.addKeyListener(keyListener);

        depositBtn.addKeyListener(keyListener);
        cancelTransferBtn.addKeyListener(keyListener);

        withdrawBtn.addKeyListener(keyListener);
        cancelWithdrawBtn.addKeyListener(keyListener);
    }

    private void addMouseListeners() {
        MyMouseListener basicBtnMouseListener = new MyMouseListener(
                new Color(147, 125, 250), new Color(54, 24, 90), 16, 18);

        for (JButton button : getOptionsBtns())
            button.addMouseListener(basicBtnMouseListener);

        MyMouseListener btnMouseListener = new MyMouseListener(
                new Color(118, 84, 154), new Color(54, 24, 90), 20, 22);

        transferNextBtn.addMouseListener(btnMouseListener);
        transferBtn.addMouseListener(btnMouseListener);
        cancelTransferBtn.addMouseListener(btnMouseListener);

        depositBtn.addMouseListener(btnMouseListener);
        cancelDepositBtn.addMouseListener(btnMouseListener);

        withdrawBtn.addMouseListener(btnMouseListener);
        cancelWithdrawBtn.addMouseListener(btnMouseListener);
    }

    private void addFocusListeners() {
        MyTextFieldFocusListener focusListener = new MyTextFieldFocusListener();

        transferAccNoTF.addFocusListener(focusListener.setText("Account Number"));
        transferMobileTF.addFocusListener(focusListener.setText("Mobile Number"));
        transferAmtTF.addFocusListener(focusListener.setText("Amount"));
        transferNoteTF.addFocusListener(focusListener.setText("Note"));

        depositAmtTF.addFocusListener(focusListener.setText("Amount"));
        depositChequeNoTF.addFocusListener(focusListener.setText("Cheque Number"));
        depositNoteTF.addFocusListener(focusListener.setText("Note"));

        withdrawAmtTF.addFocusListener(focusListener.setText("Amount"));
        withdrawChequeNoTF.addFocusListener(focusListener.setText("Cheque Number"));
        withdrawNoteTF.addFocusListener(focusListener.setText("Note"));
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
        if (getTransferModeIndexFromUser() == 0)
            throw new InvalidFieldException("Select Transfer Mode");

        if (getTransferModeIndexFromUser() == 1) {
            String accNoStr = getTransferRecAccNoFromUser();
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

        if (getTransferModeIndexFromUser() == 2) {
            String mobileNo = getTransferMobileFromUser();
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

    private void checkDepositFields() throws BankException{
        if (getDepositModeIndexFromUser() == 0)
            throw new InvalidFieldException("Select Deposit Mode");

        if (getDepositModeIndexFromUser() == 3) {
            if (getDepositChequeNoFromUser().equals("Cheque Number"))
                throw new InvalidFieldException("Enter Cheque Number");
        }
    }

    private void checkWithdrawFields() throws BankException{
        if (getWithdrawModeIndexFromUser() == 0)
            throw new InvalidFieldException("Select Withdraw Mode");

        if (getWithdrawModeIndexFromUser() == 3) {
            if (getWithdrawChequeNoFromUser().equals("Cheque Number"))
                throw new InvalidFieldException("Enter Cheque Number");
        }
    }

    private void resetTransferPage() {
        changeWorkingPanel(transferPanel, transferInitial);
        transferRecAcc = null;
        transferMode.setSelectedIndex(0);

        transferAccNoTF.setText("Account Number");
        transferMobileTF.setText("Mobile Number");
        transferAmtTF.setText("Amount");
        transferNoteTF.setText("Note");
        transferErrorMsg1.setText("");
        transferErrorMsg2.setText("");

        mobileLabel.setEnabled(false);
        mobileColon.setEnabled(false);
        transferMobileTF.setEnabled(false);
        accLabel.setEnabled(false);
        accColon.setEnabled(false);
        transferAccNoTF.setEnabled(false);
    }

    private void resetDepositPage() {
        depositMode.setSelectedIndex(0);
        depositAmtTF.setText("Amount");
        depositNoteTF.setText("Note");
        depositChequeNoTF.setText("Cheque Number");
        depositErrorMsg.setText("");
        depositChequeLabel.setVisible(false);
        depositChequeColon.setVisible(false);
        depositChequeNoTF.setVisible(false);
    }

    private void resetWithdrawPage() {
        withdrawMode.setSelectedIndex(0);
        withdrawAmtTF.setText("Amount");
        withdrawNoteTF.setText("Note");
        withdrawChequeNoTF.setText("Cheque Number");
        withdrawErrorMsg.setText("");
        withdrawChequeLabel.setVisible(false);
        withdrawChequeColon.setVisible(false);
        withdrawChequeNoTF.setVisible(false);
    }

    private void setProfilePage() {
        profileHeadingLabel.setText(account.getName() + " - PROFILE");
        profileAccNoLabel.setText(String.valueOf(account.getAccountNo()));
        profileNameLabel.setText(account.getName());
        profileDOBLabel.setText(account.getDateOfBirth());
        profileMobileLabel.setText(account.getMobileNo());
        profileEmailLabel.setText(account.getEmailID());
        profileAccTypeLabel.setText(account.type() + " Account");
        profileUsernameLabel.setText(account.getUsername());
        profileBalanceLabel.setText(Transactions.currency(account.getBalance()));
        profileOpenDateTimeLabel.setText(account.getOpeningDateTime());
    }

    private void setStatementTable() {
        tableModel = new DefaultTableModel();
        tableModel.addColumn("Date & Time");
        tableModel.addColumn("Details");
        tableModel.addColumn("Deposit");
        tableModel.addColumn("Withdraw");
        tableModel.addColumn("Balance");
        tableModel.addColumn("Note");

        var transactions = TransactionsDatabase.getTransactions(account.getAccountNo(), true);

        for (Transactions.Transaction transaction : transactions)
            tableModel.insertRow(tableModel.getRowCount(), transaction.getTransactionList().toArray());

        statementTable.setModel(tableModel);

        statementTable.getColumnModel().getColumn(0).setPreferredWidth(105);
        statementTable.getColumnModel().getColumn(1).setPreferredWidth(150);
        statementTable.getColumnModel().getColumn(3).setPreferredWidth(80);
    }

    private ArrayList<JButton> getOptionsBtns() {
        ArrayList<JButton> options = new ArrayList<>();
        options.add(homePageBtn);
        options.add(transferPageBtn);
        options.add(depositPageBtn);
        options.add(withdrawPageBtn);
        options.add(balancePageBtn);
        options.add(profilePageBtn);
        options.add(statementPageBtn);
        options.add(updateProfilePageBtn);
        options.add(logoutBtn);
        return options;
    }

    private int getTransferModeIndexFromUser() {
        return transferMode.getSelectedIndex();
    }

    private String getTransferRecAccNoFromUser() {
        return transferAccNoTF.getText().trim();
    }

    private String getTransferMobileFromUser() {
        return transferMobileTF.getText().trim();
    }

    private String getTransferAmtFromUser() {
        return transferAmtTF.getText().trim();
    }

    private String getTransferNoteFromUser() {
        return transferNoteTF.getText().trim().equals("Note") ? " " : transferNoteTF.getText().trim();
    }

    private int getDepositModeIndexFromUser() {
        return depositMode.getSelectedIndex();
    }

    private String getDepositModeFromUser() {
        if (getDepositModeIndexFromUser() == 1)
            return "ATM";
        if (getDepositModeIndexFromUser() == 2)
            return "Cash";
        return "Cheque (" + getDepositChequeNoFromUser() + ")";
    }

    private String getDepositChequeNoFromUser() {
        return depositChequeNoTF.getText().trim();
    }

    private String getDepositAmtFromUser() {
        return depositAmtTF.getText().trim();
    }

    private String getDepositNoteFromUser() {
        return depositNoteTF.getText().trim().equals("Note") ? " " : depositNoteTF.getText().trim();
    }

    private int getWithdrawModeIndexFromUser() {
        return withdrawMode.getSelectedIndex();
    }

    private String getWithdrawModeFromUser() {
        if (getWithdrawModeIndexFromUser() == 1)
            return "ATM";
        if (getWithdrawModeIndexFromUser() == 2)
            return "Cash";
        return "Cheque (" + getWithdrawChequeNoFromUser() + ")";
    }

    private String getWithdrawChequeNoFromUser() {
        return withdrawChequeNoTF.getText().trim();
    }

    private String getWithdrawAmtFromUser() {
        return withdrawAmtTF.getText().trim();
    }

    private String getWithdrawNoteFromUser() {
        return withdrawNoteTF.getText().trim().equals("Note") ? " " : withdrawNoteTF.getText().trim();
    }

    private void createUIComponents() {
        logo = new JLabel(new ImageIcon("images/bank_150.png"));
        statementTable = new JTable(tableModel);
    }
}
