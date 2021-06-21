package com.gui;

import javax.swing.*;
import java.awt.*;

public class HelloGui {
    private Frame mainWindow;
    private JFrame mainWindow2;

    private Label label = new Label("Welcome to GUI");

    public HelloGui() {
        this.UIInit();
    }

    public void UIInit(){
        mainWindow = new Frame("From AWT");
        mainWindow2 = new JFrame("From swing");


        label.setText("Test");
        mainWindow.add(label);
        mainWindow.setBackground(Color.GREEN);

        mainWindow.setSize(400,500);
        mainWindow.setVisible(true);


        mainWindow2.getContentPane().add(label);
        mainWindow2.getContentPane().setBackground(Color.getColor("lightgray"));

//        mainWindow2.setVisible(true);
//        mainWindow2.setSize(200,300);
        mainWindow2.setExtendedState(JFrame.MAXIMIZED_BOTH);
//        mainWindow2.setUndecorated(true);
        mainWindow2.setVisible(true);

    }
}
