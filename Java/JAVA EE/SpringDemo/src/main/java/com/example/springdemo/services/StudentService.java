package com.example.springdemo.services;

import com.example.springdemo.model.Student;
import com.example.springdemo.services.dtos.StudentDto;

import java.util.List;

public interface StudentService {
    public Student save(StudentDto dto) throws Exception;
    public List<Student> getAll();

    List<Student> getByFirstNameAndLastName(String firstName, String lastName) throws Exception;
}
