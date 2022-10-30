package Helper.GUIHelper;

import javax.swing.text.JTextComponent;
import java.awt.event.FocusEvent;
import java.awt.event.FocusListener;

public class MyFocusListener implements FocusListener {
    @Override
    public void focusGained(FocusEvent fEvt) {
        JTextComponent component = (JTextComponent) fEvt.getSource();
        component.selectAll();
    }

    @Override
    public void focusLost(FocusEvent e) {

    }
}
