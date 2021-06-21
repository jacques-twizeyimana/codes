package com.multiThreading.synchronization;

public class SynchronizationDemo {
    public static void main(String[] args) {

        Multiplicative multiplicative = new Multiplicative();

        SecondMultiplier thread2 = new SecondMultiplier(multiplicative);
        thread2.start();

        FirstMultiplier thread1 = new FirstMultiplier(multiplicative);
        thread1.start();
    }
}
