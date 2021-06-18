package com.example.springdemo.services.impl;

import java.util.List;
import javax.naming.directory.InvalidAttributesException;
import javax.transaction.Transactional;

import com.example.springdemo.model.Student;
import com.example.springdemo.repository.StudentRepository;
import com.example.springdemo.services.StudentService;
import com.example.springdemo.services.dtos.StudentDto;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.context.annotation.Primary;
import org.springframework.data.domain.Sort;
import org.springframework.stereotype.Service;

public class StudentServiceImpl implements StudentService {
    private final Logger log = LoggerFactory.getLogger(Student.class);
    //@Autowired
    private final StudentRepository studentRepository;
    public StudentServiceImpl(StudentRepository studentRepository) {
        this.studentRepository = studentRepository;
    }
    @Transactional()
    @Override
    public Student save(StudentDto dto) throws Exception {
        log.debug(" Saving from the original interface!");
        return studentRepository.save(new Student(dto));
    }
    @Override
    public List<Student> getAll(){
        return studentRepository.findAll(Sort.by(Sort.Direction.DESC, "id"));
    }
    @Override
    public List<Student> getByFirstNameAndLastName(String firstName, String lastName) throws Exception {
        if (firstName == null || lastName==null)
            throw new InvalidAttributesException("First Name and last Name should not be empty!");
        return studentRepository.findFirstNameAndLastNameHql(firstName, lastName);
    }
}