package Helper.GUIHelper;

import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

public class MyMouseListener implements MouseListener {
    @Override
    public void mouseClicked(MouseEvent e) {
    }

    @Override
    public void mousePressed(MouseEvent e) {

    }

    @Override
    public void mouseReleased(MouseEvent e) {
        var source = e.getSource();
        if (source instanceof JLabel jLabel) {
            jLabel.setForeground(new Color(118, 84, 154));
            jLabel.setFont(jLabel.getFont().deriveFont(12f));
        } else if (source instanceof JButton jButton) {
            jButton.setForeground(new Color(118, 84, 154));
            jButton.setFont(jButton.getFont().deriveFont(20f));
        }
    }

    @Override
    public void mouseEntered(MouseEvent e) {
        var source = e.getSource();
        if (source instanceof JLabel jLabel) {
            jLabel.setForeground(new Color(54, 24, 90));
            jLabel.setFont(jLabel.getFont().deriveFont(13f));
        } else if (source instanceof JButton jButton) {
            jButton.setForeground(new Color(54, 24, 90));
            jButton.setFont(jButton.getFont().deriveFont(22f));
        }
    }

    @Override
    public void mouseExited(MouseEvent e) {
        var source = e.getSource();
        if (source instanceof JLabel jLabel) {
            jLabel.setForeground(new Color(118, 84, 154));
            jLabel.setFont(jLabel.getFont().deriveFont(12f));
        } else if (source instanceof JButton jButton) {
            jButton.setForeground(new Color(118, 84, 154));
            jButton.setFont(jButton.getFont().deriveFont(20f));
        }
    }
}
