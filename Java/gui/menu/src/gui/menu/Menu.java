package gui.menu;

import javax.imageio.ImageIO;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;

public class Menu {
    private JFrame window;
    private JMenuBar menuBar;
    private JMenu file,windowMenu,help;

    public Menu(){
        this.init();
    }

    private void init(){
        window = new JFrame("Swing Menus");
        window.setSize(700,500);
        window.setExtendedState(Frame.MAXIMIZED_BOTH);

        menuBar =  new JMenuBar();

        file = new JMenu("file");
        windowMenu = new JMenu("window");
        help = new JMenu("help");

        menuBar.add(file);
        menuBar.add(windowMenu);
        menuBar.add(help);


        JMenuItem newFile = new JMenuItem("New");
        JMenu open = new JMenu("Open");
        JMenuItem exit = new JMenuItem("Exit");
        exit.setActionCommand("EXIT");

        file.add(newFile);
        file.add(open);
        file.add(exit);

        JMenuItem recent = new JMenuItem("Recent");
        JMenuItem hidden = new JMenuItem("Hidden");
        JMenuItem old = new JMenuItem("Old");

        open.add(recent);
        open.add(hidden);
        open.add(old);

        window.getContentPane().add(new ImagePanel());

        window.setJMenuBar(menuBar);
        window.setVisible(true);

        exit.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("Exiting application ...");
                System.exit(0);
            }
        });
        newFile.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JFrame newWindow = new JFrame("New file");
                newWindow.setSize(500,300);
                newWindow.setVisible(true);
            }
        });
    }

    public class ImagePanel extends JPanel{

        private BufferedImage image;

        public ImagePanel() {
            try {
                image = ImageIO.read(new File("C:\\Users\\DELL\\Documents\\codes\\Java\\gui\\file-a.jpg"));
            } catch (IOException ex) {
                // handle exception...
            }
        }

        @Override
        protected void paintComponent(Graphics g) {
            super.paintComponent(g);
            g.drawImage(image, 0, 0, this); // see javadoc for more info on the parameters
        }

    }

//    public class
}
