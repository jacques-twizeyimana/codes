package com.multiThreading.basics;

public class MyThread extends Thread{
    private long number;
    private String threadName;
    private Thread th;

    //constructor
    public MyThread() { }
    public MyThread(long number, String threadName) {
        this.number = number;
        this.threadName = threadName;
    }


    public void start(long number,String threadName){
        if(th == null) th = new Thread(new MyThread(number,threadName),threadName);
        th.start();
    }

    @Override
    synchronized public void run() {
        System.out.println("inside thread: "+getThreadName() + " Number is: " + this.getNumber());
        for (int n=0 ; n <= number ; n++) {
            System.out.println("from thread " + this.getThreadName() + " : " + n);
        }
    }

    public void setThreadName(String name) {
        this.threadName = name;
    }

    public long getNumber() {
        return number;
    }

    public String getThreadName() {
        return threadName;
    }

    public void setNumber(long number) {
        this.number = number;
    }
}
