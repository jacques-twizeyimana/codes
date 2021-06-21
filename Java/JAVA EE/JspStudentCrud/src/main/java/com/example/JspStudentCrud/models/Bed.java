package com.example.JspStudentCrud.models;

import com.example.JspStudentCrud.models.enums.BedType;

import javax.persistence.*;
import java.io.Serializable;
import java.util.HashSet;
import java.util.Set;

@Entity
@Table(name = "bed")
public class Bed implements Serializable {

    private static final long serialVersionId = 1l;

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "id")
    private Long id;

     private String name;

     @Enumerated(EnumType.STRING)
     private BedType type;

    public Bed() {
    }

    public Bed(String name, BedType type) {
        this.name = name;
        this.type = type;
    }

    // beds must be mapped in student
    @ManyToMany(mappedBy = "beds",cascade = CascadeType.PERSIST,fetch = FetchType.EAGER)
    private Set<Student> students = new HashSet<Student>();


    public static long getSerialVersionId() {
        return serialVersionId;
    }

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public BedType getType() {
        return type;
    }

    public void setType(BedType type) {
        this.type = type;
    }

    public Set<Student> getStudents() {
        return students;
    }

    public void setStudents(Set<Student> students) {
        this.students = students;
    }
}
