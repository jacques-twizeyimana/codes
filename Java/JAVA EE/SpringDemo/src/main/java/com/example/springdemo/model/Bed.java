package com.example.springdemo.model;

import edu.classworks.JavaOnWeb.constants.BedType;

import javax.persistence.*;
import java.io.Serializable;
import java.util.HashSet;
import java.util.Set;

@Entity
@Table(name = "bed")
public class Bed implements Serializable {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;

    private String number;

    @Enumerated(EnumType.STRING)
    private BedType type;
    /*
    @ManyToMany(mappedBy = "beds",cascade = CascadeType.PERSIST,fetch = FetchType.EAGER)
    private Set<Student> students = new HashSet<>();
    */

    @OneToMany(mappedBy = "bed", fetch = FetchType.LAZY)
    private Set<BedAssignment> students=new HashSet<BedAssignment>();

    public Bed() {
    }

    public Bed(String number, BedType type) {
        this.number = number;
        this.type = type;
    }

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public String getNumber() {
        return number;
    }

    public void setNumber(String number) {
        this.number = number;
    }

    public BedType getType() {
        return type;
    }

    public void setType(BedType type) {
        this.type = type;
    }

    public Set<BedAssignment> getStudents() {
        return students;
    }

    public void setStudents(Set<BedAssignment> students) {
        this.students = students;
    }
}
