package Helper;

import Helper.GUIHelper.Constants;
import Helper.GUIHelper.MyKeyListener;
import Helper.GUIHelper.MyMouseListener;
import Helper.GUIHelper.PageChangeListener;

import javax.swing.*;
import java.awt.*;

public class MainPage extends JFrame {
    private JPanel MainPage;
    private JPanel upper_left;
    private JLabel logo;
    private JPanel upper_right;
    private JPanel header;
    private JButton loginBtn;
    private JButton createAccBtn;

    public MainPage() {
        init();
        addActionListeners();
        addMouseListeners();
        addKeyListeners();
    }

    private void init() {
        setContentPane(MainPage);
        setTitle("PICT BANK");
        setSize(Constants.windowWidth, Constants.windowHeight);
        setResizable(Constants.resizableWindow);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        setVisible(true);
    }

    private void addActionListeners() {
        PageChangeListener pageChangeListener = new PageChangeListener(this);
        createAccBtn.addActionListener(pageChangeListener.setNewFrameStr("create"));
        loginBtn.addActionListener(pageChangeListener.setNewFrameStr("login"));
    }

    private void addKeyListeners() {
        loginBtn.addKeyListener(new MyKeyListener());
        createAccBtn.addKeyListener(new MyKeyListener());
    }

    private void addMouseListeners() {
        MyMouseListener btnMouseListener = new MyMouseListener(
                new Color(118, 84, 154), new Color(54, 24, 90), 20, 22);
        loginBtn.addMouseListener(btnMouseListener);
        createAccBtn.addMouseListener(btnMouseListener);
    }

    private void createUIComponents() {
        // TODO: place custom component creation code here
        logo = new JLabel(new ImageIcon("images/bank_300.png"));
    }
}
