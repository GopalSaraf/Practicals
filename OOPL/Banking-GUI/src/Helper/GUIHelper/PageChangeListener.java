package Helper.GUIHelper;

import Accounts.CreateAccount;
import Helper.LoginPage;
import Helper.MainPage;

import javax.swing.*;
import java.awt.event.*;

public class PageChangeListener implements MouseListener, KeyListener, ActionListener {

    // All pages :

    public static final String HOMEPAGE = "home";
    public static final String LOGINPAGE = "login";
    public static final String CREATEACCPAGE = "create";

    private final JFrame currentFrame;
    private String newFrameStr;

    public PageChangeListener(JFrame currentFrame, String newFrameStr) {
        super();
        this.currentFrame = currentFrame;
        this.newFrameStr = newFrameStr;
    }

    public PageChangeListener(JFrame currentFrame) {
        super();
        this.currentFrame = currentFrame;
    }

    public PageChangeListener setNewFrameStr(String newFrameStr) {
        this.newFrameStr = newFrameStr;
        return new PageChangeListener(currentFrame, newFrameStr);
    }

    private JFrame getNewFrame() {
        switch (newFrameStr) {
            case HOMEPAGE -> {
                return new MainPage();
            }
            case LOGINPAGE -> {
                return new LoginPage();
            }
            case CREATEACCPAGE -> {
                return new CreateAccount();
            }
        }
        return new JFrame();
    }

    @Override
    public void mouseClicked(MouseEvent e) {
        JFrame newFrame = getNewFrame();
        newFrame.setVisible(true);
        currentFrame.dispose();
    }

    @Override
    public void mousePressed(MouseEvent e) {

    }

    @Override
    public void mouseReleased(MouseEvent e) {

    }

    @Override
    public void mouseEntered(MouseEvent e) {

    }

    @Override
    public void mouseExited(MouseEvent e) {

    }

    @Override
    public void actionPerformed(ActionEvent e) {
        JFrame newFrame = getNewFrame();
        newFrame.setVisible(true);
        currentFrame.dispose();
    }

    @Override
    public void keyTyped(KeyEvent e) {
        JFrame newFrame = getNewFrame();
        newFrame.setVisible(true);
        currentFrame.dispose();
    }

    @Override
    public void keyPressed(KeyEvent e) {

    }

    @Override
    public void keyReleased(KeyEvent e) {

    }
}
