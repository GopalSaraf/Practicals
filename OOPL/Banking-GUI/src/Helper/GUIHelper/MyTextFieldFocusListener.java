package Helper.GUIHelper;

import javax.swing.*;
import java.awt.event.FocusEvent;
import java.awt.event.FocusListener;

public class MyTextFieldFocusListener implements FocusListener {

    private final String text;

    public MyTextFieldFocusListener(String text) {
        this.text = text;
    }

    public MyTextFieldFocusListener() {
        this("");
    }

    public MyTextFieldFocusListener setText(String text) {
        return new MyTextFieldFocusListener(text);
    }

    @Override
    public void focusGained(FocusEvent e) {
        JTextField textField = (JTextField) e.getSource();
        if (textField.getText().equals(text)) {
            textField.setText("");
        }
    }

    @Override
    public void focusLost(FocusEvent e) {
        JTextField textField = (JTextField) e.getSource();
        if (textField.getText().equals("")) {
            textField.setText(text);
        }
    }
}
