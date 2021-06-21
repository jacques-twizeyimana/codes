package com.multiThreading.basics;

import com.multiThreading.synchronization.FirstMultiplier;
import com.multiThreading.synchronization.Multiplicative;
import com.multiThreading.synchronization.SecondMultiplier;

public class Main {

    public static void main(String[] args) {
        System.out.println("Before Thread");

        MyThread thread = new MyThread(10,"A"); //
        thread.start();

        MyThread thread2 = new MyThread(10,"B");
        thread2.start();

//        thread = new MyThread();
//        thread.start(6,"ThirdThread");
    }
}
