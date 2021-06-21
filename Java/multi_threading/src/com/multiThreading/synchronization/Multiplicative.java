package com.multiThreading.synchronization;

public class Multiplicative {
    private long number;

    public Multiplicative(){}
    public Multiplicative(long number) {
        this.number = number;
    }

    public long getNumber() {
        return number;
    }

    public void setNumber(long number) {
        this.number = number;
    }

    synchronized public void multiply(long number) throws InterruptedException {
        try {
            for (int i = 1; i < number; i++) {
                System.out.println(i + " * " + number + " = " + (i * number));
                Thread.sleep(2l);
            }
        }catch (InterruptedException e){
            System.out.println(e.getMessage());
        }
    }
}
