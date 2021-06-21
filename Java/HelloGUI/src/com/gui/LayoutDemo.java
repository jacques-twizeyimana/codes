package com.gui;

import javax.swing.*;
import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class LayoutDemo {
    private Frame window;
    private JPanel firstPanel;
    private JPanel secondPanel;
    private JTextField firstName;
    private JTextField lastName;
    JLabel footer;

    public LayoutDemo() {
        LayoutInit();
    }

    private void LayoutInit() {
        window = new Frame();
        window.setLayout(new GridLayout(2, 1));
        window.setExtendedState(Frame.MAXIMIZED_BOTH);
        window.setSize(700, 500);

        JButton clear = new JButton("Clear");
        clear.setActionCommand("CLEAR");

        JButton submitButton = new JButton("SUBMIT");
        submitButton.setActionCommand("SAVE");

//        submitButton.setSize(100,40);
//        submitButton.setBackground(Color.getColor("blue"));


        firstPanel = new JPanel();
        firstPanel.setBorder(BorderFactory.createTitledBorder("Forms"));

        firstName = new JTextField("first name here");
        lastName = new JTextField("last name here");



//        firstName.setBounds(100,20,400,50);
        firstName.setSize(400, 100);

        firstPanel.add(firstName);
        firstPanel.add(lastName);
        firstPanel.add(clear);
        firstPanel.add(submitButton);
//        clear.addActionListener(new ActionListener() {
//            @Override
//            public void actionPerformed(ActionEvent e) {
//                firstName.setText("");
//                lastName.setText("");
//                System.out.println("Clear button was clicked");
//            }
//        });


        footer = new JLabel("Footer");

        secondPanel = new JPanel();
        secondPanel.setBorder(BorderFactory.createTitledBorder("Footer"));

        secondPanel.add(footer);
        secondPanel.setBackground(Color.CYAN);



        submitButton.addActionListener(new ButtonActionListener(firstName.getText(),lastName.getText(),footer));
        clear.addActionListener(new ButtonActionListener());


        window.add(firstPanel);
        window.add(secondPanel);
//        footer.setText("");

        window.setBackground(Color.getColor("lightgray"));
        window.setVisible(true);
        window.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent event) {
                System.exit(0);
            }
        });
    }

    public static void main(String[] args) {
        LayoutDemo demo = new LayoutDemo();
    }
}
