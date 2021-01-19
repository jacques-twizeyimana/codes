package com.company;

import java.util.HashMap;
import java.util.Map;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Map<String, String> members = new HashMap<>();

        members.put("1","Jacques");
        members.put("2", "Constance");
        members.put("3", "Sauve");
        members.put("4","Tamara");

        // Traversing through the map 
        for (Map.Entry<String, String> me : members.entrySet()) {
            System.out.print(me.getKey() + ":");
            System.out.println(me.getValue());
        }
    }
}
