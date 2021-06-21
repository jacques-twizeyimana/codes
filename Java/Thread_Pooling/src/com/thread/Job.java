package com.thread;

import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.LocalTime;

public class Job extends Thread {
    private String threadName;

    public Job(String threadName) {
        this.threadName = threadName;
    }

    @Override
    public void run() {
        try {
            System.out.println("Starting Thread: " + getThreadName() + " now: " + LocalDateTime.now().toString());
//            Thread.sleep(100);
            for (int i = 0; i < 5; i++) {
                System.out.println("Executing Task " + i + " from " + getThreadName() + " now: " + LocalTime.now().toString());
//                Thread.sleep(200);
            }
            System.out.println("Exiting Thread " + getThreadName());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public String getThreadName() {
        return threadName;
    }

    public void setThreadName(String threadName) {
        this.threadName = threadName;
    }
}
