package com.example.springdemo.model;

import com.sun.istack.NotNull;

import javax.persistence.*;
import java.util.Date;

@Entity
@Table(name = "classes")
public class Class {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;

    @NotNull
    @Column(name = "class_name")
    private String className;

    private String description;

    @Column(name = "created_at")
    private Date createdAt;
}
