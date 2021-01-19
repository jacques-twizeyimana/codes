package com.sand;
public class Person {
    private int age;
    private String name;
    private String skinColor;

    public Person(int age, String name, String skinColor) {
        this.age = age;
        this.name = name;
        this.skinColor = skinColor;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getSkinColor() {
        return skinColor;
    }

    public void setSkinColor(String skinColor) {
        this.skinColor = skinColor;
    }

    @Override
    protected Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}