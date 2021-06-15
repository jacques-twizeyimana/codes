package com.example.springdemo.services.impl;

import com.example.springdemo.model.Student;
import com.example.springdemo.services.StudentService;
import com.example.springdemo.services.dtos.StudentDto;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class StudentServiceImpl implements StudentService {
    @Override
    public Student save(StudentDto dto) {
        // TODO Auto-generated method stub
        return null;
    }
    @Override
    public List<Student> getAll() {
        // TODO Auto-generated method stub
        return null;
    }
}