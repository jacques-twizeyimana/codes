package ac.rca.java;

import ac.rca.java.controller.StudentController;
import ac.rca.java.model.StudentModel;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.SQLException;

class Register extends JFrame {

    Container formContainer;
    JLabel formTitle;
    JLabel firstNameLabel;
    JTextField lastNameLabel;
    JLabel mnOption;
    JTextField tmOption;
    JLabel genderLabel;
    JRadioButton male;
    JRadioButton female;
    ButtonGroup genderButtonGroup;
    JLabel dateOfBith;
    JComboBox datePicker;
    JComboBox monthBox;
    JComboBox yearCombobox;
    JLabel departmentLabel;
    JComboBox departmentSelector;
    JLabel schoolLabel;
    JComboBox schoolSelector;
    JCheckBox term;
    JButton submitButton;
    JButton clearButton;
    JTextArea worker;
    JLabel responser;
    JTextArea responserAdd;

    public Register() {
        this.init();
    }

    public static void main(String[] args) throws Exception {
        Register register = new Register();
    }

    public void init() {
        String[] dates = {"1", "2", "3", "4", "5",
                "6", "7", "8", "9", "10",
                "11", "12", "13", "14", "15",
                "16", "17", "18", "19", "20",
                "21", "22", "23", "24", "25",
                "26", "27", "28", "29", "30",
                "31"};

        String[] departments = {"software engineering", "embedded systems", "cyber security"};

        String[] schools = {"Rwanda Coding Academy", "Nyabihu Tvet"};

        String[] months = {"Jan", "feb", "Mar", "Apr",
                "May", "Jun", "July", "Aug",
                "Sup", "Oct", "Nov", "Dec"};
        String[] years = {"1995", "1996", "1997", "1998",
                "1999", "2000", "2001", "2002",
                "2003", "2004", "2005", "2006",
                "2007", "2008", "2009", "2010",
                "2011", "2012", "2013", "2014",
                "2015", "2016", "2017", "2018",
                "2019"};

        // constructor, to initialize the components
        // with default values.
        setTitle("Registration Form");
        setBounds(300, 90, 500, 600);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setResizable(false);

        formContainer = getContentPane();
        formContainer.setBackground(Color.white);
        formContainer.setLayout(null);

        formTitle = new JLabel("Registration Form");
        formTitle.setFont(new Font("Inter", Font.PLAIN, 20));
        formTitle.setSize(300, 30);
        formTitle.setLocation(170, 30);
        formContainer.add(formTitle);

        firstNameLabel = new JLabel("Name:");
        firstNameLabel.setFont(new Font("Inter", Font.PLAIN, 15));
        firstNameLabel.setSize(100, 20);
        firstNameLabel.setLocation(100, 100);
        formContainer.add(firstNameLabel);

        lastNameLabel = new JTextField();
        lastNameLabel.setFont(new Font("Inter", Font.PLAIN, 15));
        lastNameLabel.setSize(190, 25);
        lastNameLabel.setLocation(200, 100);
        lastNameLabel.setBorder(BorderFactory.createLineBorder(Color.WHITE));
        lastNameLabel.setBackground(Color.decode("#F5F5F5"));
        formContainer.add(lastNameLabel);

        mnOption = new JLabel("Mobile");
        mnOption.setFont(new Font("Inter", Font.PLAIN, 15));
        mnOption.setSize(100, 20);
        mnOption.setLocation(100, 150);
        formContainer.add(mnOption);

        tmOption = new JTextField();
        tmOption.setFont(new Font("Inter", Font.PLAIN, 15));
        tmOption.setSize(190, 25);
        tmOption.setLocation(200, 150);
        tmOption.setBorder(BorderFactory.createLineBorder(Color.white));
        tmOption.setBackground(Color.decode("#F5F5F5"));
        formContainer.add(tmOption);

        genderLabel = new JLabel("Gender:");
        genderLabel.setFont(new Font("Inter", Font.PLAIN, 15));
        genderLabel.setSize(100, 20);
        genderLabel.setLocation(100, 200);
        formContainer.add(genderLabel);

        male = new JRadioButton("Male");
        male.setFont(new Font("Inter", Font.PLAIN, 15));
        male.setSelected(true);
        male.setSize(75, 20);
        male.setLocation(200, 200);
        male.setBackground(Color.white);
        male.setBorder(BorderFactory.createLineBorder(Color.white));
        formContainer.add(male);

        female = new JRadioButton("Female");
        female.setFont(new Font("Inter", Font.PLAIN, 15));
        female.setSelected(false);
        female.setSize(80, 20);
        female.setLocation(275, 200);
        female.setBackground(Color.white);

        formContainer.add(female);

        genderButtonGroup = new ButtonGroup();
        genderButtonGroup.add(male);
        genderButtonGroup.add(female);

        dateOfBith = new JLabel("Birth Date:");
        dateOfBith.setFont(new Font("Inter", Font.PLAIN, 15));
        dateOfBith.setSize(100, 20);
        dateOfBith.setLocation(100, 250);
        formContainer.add(dateOfBith);

        datePicker = new JComboBox(dates);
        datePicker.setFont(new Font("Inter", Font.PLAIN, 15));
        datePicker.setSize(50, 20);
        datePicker.setLocation(200, 250);
        datePicker.setBorder(BorderFactory.createLineBorder(Color.white));
        setBackground(Color.white);
        formContainer.add(datePicker);

        monthBox = new JComboBox(months);
        monthBox.setFont(new Font("Inter", Font.PLAIN, 15));
        monthBox.setSize(60, 20);
        monthBox.setLocation(250, 250);
        formContainer.add(monthBox);

        yearCombobox = new JComboBox(years);
        yearCombobox.setFont(new Font("Inter", Font.PLAIN, 15));
        yearCombobox.setSize(60, 20);
        yearCombobox.setLocation(320, 250);
        formContainer.add(yearCombobox);


//        term = new JCheckBox("Accept Terms And Conditions.");
//        term.setFont(new Font("Inter", Font.PLAIN, 15));
//        term.setSize(250, 20);
//        term.setLocation(150, 400);
//        c.add(term);

        departmentLabel = new JLabel("Department:");
        departmentLabel.setFont(new Font("Inter", Font.PLAIN, 15));
        departmentLabel.setSize(100, 20);
        departmentLabel.setLocation(100, 300);
        formContainer.add(departmentLabel);

        departmentSelector = new JComboBox(departments);
        departmentSelector.setFont(new Font("Inter", Font.PLAIN, 15));
        departmentSelector.setSize(185, 30);
        departmentSelector.setLocation(200, 300);
        departmentSelector.setBackground(Color.decode("#F5F5F5"));
        departmentSelector.setBorder(null);
        formContainer.add(departmentSelector);

        schoolLabel = new JLabel("School:");
        schoolLabel.setFont(new Font("Inter", Font.PLAIN, 15));
        schoolLabel.setSize(100, 20);
        schoolLabel.setLocation(100, 350);
        formContainer.add(schoolLabel);

        schoolSelector = new JComboBox(schools);
        schoolSelector.setFont(new Font("Inter", Font.PLAIN, 15));
        schoolSelector.setSize(185, 30);
        schoolSelector.setLocation(200, 350);
        schoolSelector.setBorder(null);
        formContainer.add(schoolSelector);


        submitButton = new JButton("Submit");
        submitButton.setFont(new Font("Inter", Font.PLAIN, 15));
        submitButton.setSize(90, 30);
        submitButton.setLocation(150, 450);
        submitButton.setActionCommand("register");
        submitButton.addActionListener(new ButtonEventsListener());
        submitButton.setBorder(BorderFactory.createLineBorder(Color.white));
        submitButton.setBorder(BorderFactory.createLineBorder(Color.white));
        submitButton.setBackground(Color.decode("#228B22"));
        submitButton.setForeground(Color.white);
        formContainer.add(submitButton);

        clearButton = new JButton("Clear");
        clearButton.setFont(new Font("Inter", Font.PLAIN, 15));
        clearButton.setSize(90, 30);
        clearButton.setLocation(270, 450);
        clearButton.setActionCommand("clear");
        clearButton.addActionListener(new ButtonEventsListener());
        clearButton.setBorder(BorderFactory.createLineBorder(Color.white));
        clearButton.setBackground(Color.decode("#228B22"));
        clearButton.setForeground(Color.white);
        formContainer.add(clearButton);

        responser = new JLabel("");
        responser.setFont(new Font("Inter", Font.PLAIN, 20));
        responser.setSize(500, 25);
        responser.setLocation(100, 500);
        formContainer.add(responser);

        setVisible(true);
    }

    public class ButtonEventsListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            try {
                if (e.getActionCommand() == "register") {
                    StudentController studentController = new StudentController();
                    StudentModel newStudent = new StudentModel();

                    newStudent.setLastName(lastNameLabel.getText());
                    newStudent.setFirstName(firstNameLabel.getText());
                    newStudent.setGender(male.isSelected() ? "Male" : "Female");
                    newStudent.setDepartmentId(Integer.parseInt(departmentSelector.getSelectedItem().toString()));
                    newStudent.setDepartmentId(Integer.parseInt(departmentSelector.getSelectedItem().toString()));
                    newStudent.setBirthDate(datePicker.getSelectedItem().toString() + "/" + monthBox.getSelectedItem().toString() + "/" + yearCombobox.getSelectedItem().toString());
                    try {
                        if(studentController.register(newStudent)) System.out.println("Student recorded successfuly");
                        else System.out.println("Error occurred when trying to register student");
                    } catch (SQLException exceptionSQL) {
                        exceptionSQL.printStackTrace();
                    }
                } else if (e.getActionCommand() == "clear") {
                    datePicker.setSelectedIndex(0);
                    monthBox.setSelectedIndex(0);
                    yearCombobox.setSelectedIndex(0);
                    responserAdd.setText("");
                    lastNameLabel.setText("");
                    tmOption.setText("");
                    responser.setText("");
                    worker.setText("");
                    term.setSelected(false);
                } else System.out.println("invalid action");
            } catch (Exception exception) {
                System.out.println(exception.getMessage());
            }
        }

    }

}
