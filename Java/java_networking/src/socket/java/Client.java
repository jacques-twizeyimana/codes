package socket.java;

import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.InputStreamReader;
import java.net.Socket;

public class
Client {
    public static void main(String[] args)throws Exception {
        try {
            Socket socket = new Socket("localhost",8090);
            DataInputStream input = new DataInputStream(socket.getInputStream());
            DataOutputStream output = new DataOutputStream(socket.getOutputStream());

            String request = "";
            String response = "";

            BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

            while (!request.equals("exit")){
                System.out.println("Enter request:");
                request = reader.readLine();

                output.writeUTF(request);
                response = input.readUTF();

                System.out.println("response from server is "+ response);

            }
            input.close();
            socket.close();
        }
        catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}
