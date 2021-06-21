package gui.menu;

import javax.swing.*;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;
import java.awt.*;
import java.lang.reflect.Array;

public class Table {

    private JFrame window;
    private JMenuBar menuBar;
    private JMenu file,windowMenu,help;

    public Table() {
        this.init();
    }

    public void init(){
        window = new JFrame("Tables");
//        window.setExtendedState(Frame.MAXIMIZED_BOTH);
        window.setSize(700,500);

        menuBar =  new JMenuBar();

        file = new JMenu("file");
        windowMenu = new JMenu("window");
        help = new JMenu("help");

        menuBar.add(file);
        menuBar.add(windowMenu);
        menuBar.add(help);

        String columns[] = {"Code","First name","Last name","status"};
        String data[][] = {
                {"1","Jacques","Twizeyimana","ACTIVE"},
                {"2","John","Doe","ACTIVE"},
                {"2","Kamala","Harris","INACTIVE"},
                {"2","Kongo","Oreste","INACTIVE"},
        };

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


}
