package com.thread;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class Main {

    public static void main(String[] args) {
        Job job1 = new Job("A");
        Job job2 = new Job("B");
        Job job3 = new Job("C");
        Job job4 = new Job("D");
        Job job5 = new Job("E");
        Job job6 = new Job("F");
        Job job7 = new Job("G");
        Job job8 = new Job("H");
        Job job9 = new Job("I");
        Job job10 = new Job("J");

        ExecutorService pool = Executors.newFixedThreadPool(3);
        pool.execute(job1);
        pool.execute(job2);
        pool.execute(job3);
        pool.execute(job4);
        pool.execute(job5);
        pool.execute(job6);
        pool.execute(job7);
        pool.execute(job8);
        pool.execute(job9);
        pool.execute(job10);

        pool.shutdown();
    }
}
