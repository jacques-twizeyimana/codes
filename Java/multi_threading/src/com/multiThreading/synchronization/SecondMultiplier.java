package com.multiThreading.synchronization;

public class SecondMultiplier extends Thread {
    private Multiplicative multiplicative;

    public SecondMultiplier() {
    }

    public SecondMultiplier(Multiplicative multiplicative) {
        this.multiplicative = multiplicative;
    }

    public Multiplicative getMultiplicative() {
        return multiplicative;
    }

    public void setMultiplicative(Multiplicative multiplicative) {
        this.multiplicative = multiplicative;
    }

    @Override
    public void run() {
        try {
            this.multiplicative.multiply(9);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
