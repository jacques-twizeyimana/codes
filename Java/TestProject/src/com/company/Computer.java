package com.company;

public class Computer {
    private String name;

    private int ramCapacity;
    private String manufacturer;
    private int storage;
    private Keyboard keyboard;
    private Motherboard motherboard;

    public Computer(){}

    public Computer(String name, int ramCapacity, String manufacturer, int storage,Keyboard keyboard,Motherboard motherboard) {
        this.name = name;
        this.ramCapacity = ramCapacity;
        this.manufacturer = manufacturer;
        this.storage = storage;

        this.keyboard = keyboard;
        this.motherboard = motherboard;
    }

    public String getName() {
        return name;
    }

    public String getKeyboard(){
        return this.keyboard.getManufacturer();
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getRamCapacity() {
        return ramCapacity;
    }

    public void setRamCapacity(int ramCapacity) {
        this.ramCapacity = ramCapacity;
    }

    public String getManufacturer() {
        return manufacturer;
    }

    public void setManufacturer(String manufacturer) {
        this.manufacturer = manufacturer;
    }

    public int getStorage() {
        return storage;
    }

    public void setStorage(int storage) {
        this.storage = storage;
    }
}
