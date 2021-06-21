package com.gui;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ButtonActionListener implements ActionListener {
    private String lastName;
    private String firstName;
    private JLabel footer;

    public ButtonActionListener() {
    }

    public ButtonActionListener(String lastName, String firstName,JLabel footer1) {
        this.lastName = lastName;
        this.firstName = firstName;
        this.footer = footer1;
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String actionCommand = e.getActionCommand();
        System.out.println("Action command: " +actionCommand);

        if(actionCommand.equals("SAVE")){
            System.out.println("Save command was received");
            footer.setText(firstName +" " + lastName);
        }
        else if (actionCommand.equals("CLEAR")){
            System.out.println("Clear command received");
        }
    }
}
