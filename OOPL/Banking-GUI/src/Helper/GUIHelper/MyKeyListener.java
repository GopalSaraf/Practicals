package Helper.GUIHelper;

import javax.swing.*;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

public class MyKeyListener implements KeyListener {
    @Override
    public void keyTyped(KeyEvent e) {

    }

    @Override
    public void keyPressed(KeyEvent e) {
        if (e.getKeyCode() == KeyEvent.VK_ENTER) {
            if (e.getSource() instanceof JButton jButton) {
                jButton.doClick();
            }
        }
    }

    @Override
    public void keyReleased(KeyEvent e) {

    }
}
