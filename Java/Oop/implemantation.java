// import "./PersonClass.java";
import java.io.*;
import java.util.*;

class  implemantation extends PersonClass{
  public static void main(String[] args) {
    PersonClass person = new PersonClass();

    System.out.println("Enter your names");
    String names;
    int age;

    Scanner scanning=new Scanner(System.in);
    names = scanning.nextLine();
    System.out.println("Enter your age");
    age = scanning.nextInt();
    System.out.println("Enter your gender");
    String gender = scanning.nextLine();

    person.setNames(names);
    person.setAge(age);
    person.setGender(gender);
    System.out.println(person.introduceMyself());
  }
}
