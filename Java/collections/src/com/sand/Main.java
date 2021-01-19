package com.sand;
import java.util.*;

public class Main {

    public static void main(String[] args) {
	// write your code here
//        List<Person>  persons = new ArrayList<>();
//        persons.add(new Person(14,"Damba","White"));
//        persons.add(new Person(50,"Sam","blue"));
//        Person damba = persons.get(0);
//        Person sam = persons.get(1);
//        for (int i = 0; i < persons.size();i++){
//            System.out.println(persons.get(i).getAge() + " " + persons.get(i).getName() + " " + persons.get(i).getSkinColor());
//        }
        // SETS
        Set<Person> persons = new HashSet<>();
        Person p1 = new Person(14,"Daniel","black");
        Person p2 = new Person(15,"Duncan","white");
        persons.add(p1);
        persons.add(p2);
        for (Person p:persons){
            System.out.println(p.getName());
        }
        Set<Integer> numbers = new HashSet<>();
        numbers.add((2));
        numbers.add((2));
        for (Integer num:numbers ){
            System.out.println(num);
        }
    }
}
