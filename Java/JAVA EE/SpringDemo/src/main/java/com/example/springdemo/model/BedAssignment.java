package com.example.springdemo.model;

import edu.classworks.JavaOnWeb.constants.AssignmentStatus;

import javax.persistence.*;
import java.io.Serializable;
import java.time.LocalDateTime;

@Entity
@Table(name = "bed_assignment")
public class BedAssignment implements Serializable {
    private static final long serialVersionUID = 1L;
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "id")
    private Long id;
    private String assignedOn;
    private String assignedBy;
    private String releasedOn;
    @Enumerated(EnumType.STRING)
    private AssignmentStatus status;
    @ManyToOne
    private Student student;
    @ManyToOne
    private Bed bed;
    public BedAssignment() {
    }

    public BedAssignment(String assignedOn, String assignedBy, String releasedOn, AssignmentStatus status, Student student, Bed bed) {
        this.assignedOn = assignedOn;
        this.assignedBy = assignedBy;
        this.releasedOn = releasedOn;
        this.status = status;
        this.student = student;
        this.bed = bed;
    }

    public Long getId() {
        return id;
    }
    public void setId(Long id) {
        this.id = id;
    }
    public String getAssignedOn() {
        return assignedOn;
    }
    public void setAssignedOn(String assignedOn) {
        this.assignedOn = assignedOn;
    }
    public String getAssignedBy() {
        return assignedBy;
    }
    public void setAssignedBy(String assignedBy) {
        this.assignedBy = assignedBy;
    }
    public String getReleasedOn() {
        return releasedOn;
    }
    public void setReleasedOn(String releasedOn) {
        this.releasedOn = releasedOn;
    }
    public AssignmentStatus getStatus() {
        return status;
    }
    public void setStatus(AssignmentStatus status) {
        this.status = status;
    }
}