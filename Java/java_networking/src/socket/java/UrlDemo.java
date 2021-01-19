package socket.java;

import java.io.InputStream;
import java.net.URL;
import java.net.URLConnection;

public class UrlDemo {
    public static void main(String[] args) throws Exception{
        try {
            URL url = new URL("https://www.javatpoint.com/socket-programming");
            System.out.println("default port is: " + url.getDefaultPort());
            System.out.println(url.getFile());
            System.out.println("host: " + url.getHost());

            URLConnection connection  = url.openConnection();
            InputStream input = connection.getInputStream();

            int c = 0;

            while (c != -1){
                c = input.read();
                System.out.print( (char)c );
            }
        }
        catch (Exception e){
            System.out.println(e.getMessage());
        }
    }
}
