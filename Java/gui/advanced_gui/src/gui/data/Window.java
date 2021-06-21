package gui.data;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Window {
    private JFrame window;
    private boolean loggedIn;

    public Window() {
        this.init();
    }

    public void init() {
        window = new JFrame("Data access and GUI");
        window.setSize(800, 700);
        window.setExtendedState(Frame.MAXIMIZED_BOTH);

        JMenuBar menuBar = new JMenuBar();
        JMenu file = new JMenu("File");
        JMenu help = new JMenu("Help");
        JMenu windowMenu = new JMenu("Window");

        JMenu newItem = new JMenu("New");
        JMenuItem exit = new JMenuItem("Exit");


        JMenuItem category = new JMenuItem("Category");
        JMenuItem user = new JMenuItem("User");

        newItem.add(category);
        newItem.add(user);

        file.add(newItem);
        file.add(exit);

        menuBar.add(file);
        menuBar.add(help);
        menuBar.add(windowMenu);

        window.setJMenuBar(menuBar);
        if (loggedIn) authenticate();
        else mainFunctionality();
        window.setVisible(true);
    }

    public void authenticate() {
        JTabbedPane tabbedPane = new JTabbedPane(JTabbedPane.TOP);

        JPanel loginPanel = new JPanel();
        JPanel registerPanel = new JPanel();

        JLabel loginLabel = new JLabel("LOGIN TO YOUR ACCOUNT");
        JLabel registerLabel = new JLabel("CREATE ACCOUNT");


        JTextField email = new JTextField("Enter email");
        JTextField password = new JTextField("Password");
        JButton button = new JButton("Login");

        button.addActionListener(new ButtonEventsListener());

        loginPanel.add(loginLabel);
        loginPanel.add(email);
        loginPanel.add(password);
        loginPanel.add(button);

        //register fields
        JTextField yourEmail = new JTextField("Enter email");
        JTextField newPassword = new JTextField("Password");
        JTextField fullName = new JTextField("Full name");
        JTextField username = new JTextField("User name");
        JButton signUpButton = new JButton("Sign up");
        signUpButton.setActionCommand("register");

        signUpButton.addActionListener(new ButtonEventsListener());

        registerPanel.add(registerLabel);
        registerPanel.add(fullName);
        registerPanel.add(username);
        registerPanel.add(yourEmail);
        registerPanel.add(newPassword);
        registerPanel.add(signUpButton);

        tabbedPane.add("Login", loginPanel);
        tabbedPane.add("Register", registerPanel);

        window.add(tabbedPane);
    }

    public void mainFunctionality(){

        GridLayout gridLayout = new GridLayout(2,3);

        JPanel sidebar = new JPanel();
        JPanel tablePanel = new JPanel();
        JPanel footer = new JPanel();

        sidebar.setBackground(Color.BLUE);
        tablePanel.setBackground(Color.CYAN);
        footer.setBackground(Color.black);

        gridLayout.addLayoutComponent("Sidebar",sidebar);
        gridLayout.addLayoutComponent("Table",tablePanel);
        gridLayout.addLayoutComponent("Footer",footer);

        window.setLayout(gridLayout);
    }

    public class ButtonEventsListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            if (e.getActionCommand() == "Login"){
                setLoggedIn(true);
                return;
            }
            else if(e.getActionCommand() == "register"){
                setLoggedIn(true);
                return;
            }
            else System.out.println("invalid action");
        }
    }

    public boolean isLoggedIn() {
        return loggedIn;
    }

    public void setLoggedIn(boolean loggedIn) {
        this.loggedIn = loggedIn;
    }

}