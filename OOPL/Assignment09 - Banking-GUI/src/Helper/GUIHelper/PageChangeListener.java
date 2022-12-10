package Helper.GUIHelper;

import Accounts.CreateAccount;
import Helper.CustomerHelper.ForgetHandlerPage;
import Helper.LoginPage;
import Helper.MainPage;

import javax.swing.*;
import java.awt.event.*;

public class PageChangeListener implements MouseListener, KeyListener, ActionListener {

    private final JFrame currentFrame;
    private Page newFrame;

    public PageChangeListener(JFrame currentFrame, Page newFrame) {
        super();
        this.currentFrame = currentFrame;
        this.newFrame = newFrame;
    }

    public PageChangeListener(JFrame currentFrame) {
        super();
        this.currentFrame = currentFrame;
    }

    private JFrame getNewFrame() {
        switch (newFrame) {
            case HOME_PAGE -> {
                return new MainPage();
            }
            case LOGIN_PAGE -> {
                return new LoginPage();
            }
            case CREATE_ACC_PAGE -> {
                return new CreateAccount();
            }
            case FORGOT_USERNAME -> {
                return new ForgetHandlerPage(ForgetHandlerPage.DEFAULT.USERNAME);
            }
            case FORGOT_PASSWORD -> {
                return new ForgetHandlerPage(ForgetHandlerPage.DEFAULT.PASSWORD);
            }
        }
        return new JFrame();
    }

    public PageChangeListener setNewFrame(Page newFrame) {
        this.newFrame = newFrame;
        return new PageChangeListener(currentFrame, newFrame);
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

    public enum Page {
        HOME_PAGE, LOGIN_PAGE, CREATE_ACC_PAGE, FORGOT_USERNAME, FORGOT_PASSWORD
    }
}
