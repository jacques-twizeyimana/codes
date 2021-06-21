package ac.rca.java.utils;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

/**
 *
 * @author Jacques Twizeyimana
 */
public class Db {
    private static Connection connection = null;
    private static Statement statement = null;

    public Db() {
    }

    public static void init() {
        try {
            System.out.println("DB is connecting....");
            connection = DriverManager.getConnection("jdbc:mysql://localhost:3306/desktop_app_db", "root", "Jack@2021");
            statement = connection.createStatement();
            System.out.println("Db connected......");

        } catch (Exception e) {
            e.printStackTrace();
        }

    }

    public static Connection getConnection() {
        return connection;
    }

    public static Statement getStatement() {
        return statement;
    }
}
