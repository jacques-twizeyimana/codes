package socket.java;

import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.InputStreamReader;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.regex.Pattern;

public class Server {
    public static void main(String[] args) throws Exception {
        try {
            ServerSocket server = new ServerSocket(8090);
            Socket socket = server.accept();

            DataInputStream input = new DataInputStream(socket.getInputStream());
            DataOutputStream output = new DataOutputStream(socket.getOutputStream());

            String response = "";
            String request = "";

            BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
            System.out.println("Server started listening");

            while(!request.equals("exit")){
                request = input.readUTF();
                System.out.println("client request was: "+ request);
                System.out.println("Please enter response");

                response = reader.readLine();
                output.writeUTF(response);
                output.flush();
            }
            input.close();
            socket.close();
            server.close();

        }
        catch (Exception e){
            System.out.println(e.getMessage());
        }
    }
}