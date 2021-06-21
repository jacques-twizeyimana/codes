//package com.example.JspStudentCrud.models;
//
//import javax.persistence.*;
//import java.util.List;
//
//@Entity
//@Table(name = "classes")
//public class Class {
//
//    @Id
//    @GeneratedValue(strategy = GenerationType.IDENTITY)
//    private Long id;
//
//    private String className;
//
//    @ManyToMany
//    private List<Course> courses;
//
//    public Class() {
//    }
//
//    public Class(String className) {
//        this.className = className;
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
//    public String getClassName() {
//        return className;
//    }
//
//    public void setClassName(String className) {
//        this.className = className;
//    }
//}
