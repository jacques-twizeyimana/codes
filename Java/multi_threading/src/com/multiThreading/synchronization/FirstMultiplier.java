package com.multiThreading.synchronization;

public class FirstMultiplier extends Thread{
    private Multiplicative multi;

    public FirstMultiplier(Multiplicative multi) {
        this.multi = multi;
    }

    @Override
    public void run(){
        try {
            multi.multiply(10);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
