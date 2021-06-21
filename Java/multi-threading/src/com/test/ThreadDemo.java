package com.test;

public class ThreadDemo extends Thread{
    private String name;
    private int limit;

    public ThreadDemo(String name, int limit) {
        this.name = name;
        this.limit = limit;
    }

    @Override
    synchronized public void run() {
        for (int i = 0; i < limit; i++) {
            System.out.println("Thread " + name + " : "+i);
        }
    }


    public String getNameH() {
        return name;
    }

    public void setNameH(String name) {
        this.name = name;
    }

    public int getLimit() {
        return limit;
    }

    public void setLimit(int limit) {
        this.limit = limit;
    }

}
