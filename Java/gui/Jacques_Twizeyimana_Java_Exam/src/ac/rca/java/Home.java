package ac.rca.java;

import ac.rca.java.controller.StudentController;
import ac.rca.java.model.StudentModel;

import javax.swing.*;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;
import java.awt.*;
import java.sql.SQLException;
import java.util.List;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Home{
    private JFrame window;
    private JMenuBar menuBar;
    private JMenu file,windowMenu,help;

    public Home() throws SQLException {
        this.init();
    }

    public void init() throws SQLException {
        window = new JFrame("Student Management system");
        window.setSize(700,500);
//        window.setExtendedState(Frame.MAXIMIZED_BOTH);

        JLabel tableLabel = new JLabel("List of recorded students");
        tableLabel.setBackground(Color.BLUE);
        window.add(tableLabel);

        String columns[] = {"#","First name","Last name","Department","School"};

        /*
        *
                {"#","First name","Last name","Department","School"},
                {"#","First name","Last name","Department","School"},
                {"#","First name","Last name","Department","School"},
                {"#","First name","Last name","Department","School"}*/

        List<StudentModel> studentModelList = new StudentController().getAllStudents();
        String data[][] = new String[studentModelList.size()][5];
        for (int i = 0; i < studentModelList.size(); i++) {
            data[i][0] ="#";
            data[i][1] =studentModelList.get(i).getFirstName();
            data[i][2] =studentModelList.get(i).getLastName();
            data[i][3] = String.valueOf(studentModelList.get(i).getDepartmentId());
            data[i][4] ="Rwanda Coding Academy";
        }
//        studentModelList.toArray(data);

        JTable table = new JTable(data,columns);
        JScrollPane pane = new JScrollPane(table);

        table.setCellSelectionEnabled(true);
        ListSelectionModel selectionModel = table.getSelectionModel();
        selectionModel.setSelectionMode(ListSelectionModel.MULTIPLE_INTERVAL_SELECTION);
        selectionModel.addListSelectionListener(new ListSelectionListener() {
            @Override
            public void valueChanged(ListSelectionEvent e) {
                System.out.println("Cell selected");
                int rows[] = table.getSelectedRows();
                int cols[] = table.getSelectedColumns();

                for (int row = 0; row < rows.length; row++) {
                    for (int col = 0; col < cols.length; col++) {
                        String value = (String) table.getValueAt(rows[row],cols[col]);
                        System.out.println("selected value " + value);
                    }
                }
            }
        });
        window.add(pane);
        window.setVisible(true);
    }

    public void addHeader(){
        JPanel headerPanel = new JPanel();
        ImageIcon  unScaledImage= new ImageIcon("C:\\Users\\DELL\\Downloads\\exam_suporting_files\\images\\school.png");
        Image schoolImage = unScaledImage.getImage().getScaledInstance(200, 150, Image.SCALE_DEFAULT);


    }
}
