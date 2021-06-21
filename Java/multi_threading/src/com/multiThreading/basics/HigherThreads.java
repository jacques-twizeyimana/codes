package com.multiThreading.basics;

public class HigherThreads extends Thread{
    private long number;
    private String ThreadName;
    private Thread th;

    public HigherThreads() {}

    public HigherThreads(long number, String ThreadName, Thread th) {
        this.number = number;
        this.ThreadName = ThreadName;
        this.th = th;
    }


    public long getNumber() {
        return number;
    }

    public void setNumber(long number) {
        this.number = number;
    }

    public String getThreadName() {
        return ThreadName;
    }

    public void setThreadName(String threadName) {
        ThreadName = threadName;
    }

    public Thread getTh() {
        return th;
    }

    public void setTh(Thread th) {
        this.th = th;
    }
}
