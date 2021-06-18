package com.example.springdemo.model;

import com.example.springdemo.services.dtos.StudentDto;

import javax.persistence.*;
import java.util.HashSet;
import java.util.Set;

@Entity
@Table(name = "students")
public class Student {

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column()
    private int id;

    @Column(name = "first_name",nullable = false)
    private String firstName;

    @Column(name = "last_name",nullable = false)
    private String lastName;

    @Column(nullable = false)
    private String gender;

    @Column(nullable = false)
    private String email;

    @Column(nullable = false)
    private String year;

    @Column(nullable = false, name = "class")
    private String  className;

    /*
    @ManyToMany(cascade = CascadeType.PERSIST,fetch = FetchType.LAZY)
    @JoinTable(
            name = "student_beds_tbl",
            joinColumns = {@JoinColumn(name = "student_id")},
            inverseJoinColumns = {@JoinColumn(name = "bed_id")}
    )
    private Set<Bed> beds = new HashSet<>();
    */

    @OneToMany(mappedBy = "student", fetch = FetchType.LAZY)
    private Set<BedAssignment> beds =new HashSet<BedAssignment>();

    public Student(){}

    public Student(int id){
        this.id = id;
    }

    public Student(String firstName, String lastName, String gender, String email, String year, String className) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.gender = gender;
        this.email = email;
        this.year = year;
        this.className = className;
    }

    public Student(StudentDto dto) {
    }

    public Student(String firstName, String lastName, String gender) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.gender = gender;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getFirstName() {
        return firstName;
    }

    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String  getYear() {
        return year;
    }

    public void setYear(String year) {
        this.year = year;
    }

    public String getClassName() {
        return className;
    }

    public void setClassName(String className) {
        this.className = className;
    }

    public Set<BedAssignment> getBeds() {
        return beds;
    }

    public void setBeds(Set<BedAssignment> bedAssignments) {
        this.beds = bedAssignments;
    }
}
