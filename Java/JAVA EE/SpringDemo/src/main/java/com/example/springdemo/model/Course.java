package com.example.springdemo.model;

import com.sun.istack.NotNull;

import javax.persistence.*;
import java.util.Date;

@Entity
@Table(name = "courses")
public class Course {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;

    @NotNull
    @Column(name = "course_name")
    private String courseName;

    @NotNull
    @Column(unique = true,name = "course_code")
    private String courseCode;

    @Column(name = "number_of_hours_per_week")
    private int numberOfHoursPerWeek;

    @Column(name = "created_at")
    private Date createdAt;

}
