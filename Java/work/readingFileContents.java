import java.util.Scanner;
import java.io.*;

class readingFileContents{
    public static void main(String args[]) throws Exception{

      //declare variables I will use in this program

      String contents="";
      int lines=0,wordsCounter=0,characters=0;
      String[] words=null;    //the word Array

      System.out.println("Enter path to file to read");
      Scanner in = new Scanner(System.in);
      String filePath = in.nextLine();
      try {
        File file = new File(filePath);
        if (!file.isFile()){
          System.out.println("Specified file path " + filePath+" is not a file");
          System.exit(0);
        }
        BufferedReader reader = new BufferedReader(new FileReader(file));
        while ((contents = reader.readLine()) != null){
          characters+= contents.length();
          System.out.println(contents);
          lines++; //increment line counter;
          words=contents.split(" ");   //Split the word using space
          wordsCounter+=words.length;   //increase the word count for each word


        }
          System.out.println("The file " + filePath +" contains " + lines + " lines with " + characters+" characters in " + wordsCounter + " words");
      }
      catch(Exception exception) {
          exception.getMessage();
      }

    }
}
