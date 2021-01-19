package dbms;

import java.sql.Connection;
import java.sql.DriverManager;

public class Main {

    public static void main(String[] args) throws Exception {
        //load connection drivers
        try {

            Class.forName("com.mysql.jdbc.Driver");

            //create connection to database

            String databaseUrl = "jdbc:mysql://localhost:3306/java_study";
            String password = "Jack@2020";
            String username = "jacques";

            Connection connection = DriverManager.getConnection(databaseUrl,username,password);

            if (connection != null){
                System.out.println(connection);
            }
            else{
                System.out.println("Not working");
            }
        }

        catch (Exception e){
            System.out.println(e.getMessage());
        }
    }
}
