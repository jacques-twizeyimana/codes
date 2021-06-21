//package com.example.JspStudentCrud.models;
//
//import javax.persistence.*;
//import java.util.List;
//
//@Entity
//@Table(name = "courses")
//public class Course {
//    @Id
//    @GeneratedValue(strategy = GenerationType.IDENTITY)
//    private Long id;
//
//    private String courseName;
//
//    private String courseCode;
//
//    @ManyToMany
//    private List<Class> classes;
//
//    public Course() {
//    }
//
//    public Course(String courseName, String courseCode) {
//        this.courseName = courseName;
//        this.courseCode = courseCode;
//    }
//
//    public Long getId() {
//        return id;
//    }
//
//    public void setId(Long id) {
//        this.id = id;
//    }
//
//    public String getCourseName() {
//        return courseName;
//    }
//
//    public void setCourseName(String courseName) {
//        this.courseName = courseName;
//    }
//
//    public String getCourseCode() {
//        return courseCode;
//    }
//
//    public void setCourseCode(String courseCode) {
//        this.courseCode = courseCode;
//    }
//}
