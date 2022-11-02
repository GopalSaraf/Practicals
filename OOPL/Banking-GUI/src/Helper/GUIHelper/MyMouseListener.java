package Helper.GUIHelper;

import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

public class MyMouseListener implements MouseListener {

    private final Color c_before;
    private final Color c_after;
    private final float f_before;
    private final float f_after;

    public MyMouseListener(Color c_before, Color c_after, float f_before, float f_after) {
        this.c_before = c_before;
        this.c_after = c_after;
        this.f_before = f_before;
        this.f_after = f_after;
    }

    @Override
    public void mouseClicked(MouseEvent e) {
    }

    @Override
    public void mousePressed(MouseEvent e) {

    }

    @Override
    public void mouseReleased(MouseEvent e) {
        var source = e.getSource();
        if (source instanceof JComponent component) {
            component.setForeground(c_before);
            component.setFont(component.getFont().deriveFont(f_before));
        }
    }

    @Override
    public void mouseEntered(MouseEvent e) {
        var source = e.getSource();
        if (source instanceof JComponent component) {
            component.setForeground(c_after);
            component.setFont(component.getFont().deriveFont(f_after));
        }
    }

    @Override
    public void mouseExited(MouseEvent e) {
        var source = e.getSource();
        if (source instanceof JComponent component) {
            component.setForeground(c_before);
            component.setFont(component.getFont().deriveFont(f_before));
        }
    }
}
