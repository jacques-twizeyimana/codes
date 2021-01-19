package com.company;

public class Main {

    public static void main(String[] args) {
        Computer comp = new Computer(
                "Positivo BGH",8,"Positivo RW",1024,
                new Keyboard("Magic keyboard",13,"Dell"),
                new Motherboard("Mboard",1,"Apple")
        );
        System.out.println(comp.getKeyboard());
    }
}
