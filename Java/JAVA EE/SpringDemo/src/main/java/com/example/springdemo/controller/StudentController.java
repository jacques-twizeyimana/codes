package com.example.springdemo.controller;

import java.net.URISyntaxException;
import javax.validation.Valid;

import com.example.springdemo.model.Student;
import com.example.springdemo.services.StudentService;
import com.example.springdemo.services.dtos.SchoolManResponseDto;
import com.example.springdemo.services.dtos.StudentDto;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/schl_man/v1/students")
public class StudentController {
    private final Logger log = LoggerFactory.getLogger(StudentController.class);
    private final StudentService studentService;

    public StudentController(StudentService studentService) {
        this.studentService = studentService;
    }

    @PostMapping("/addStudent")
    public ResponseEntity<SchoolManResponseDto> createStudent(@Valid @RequestBody StudentDto studentDto)
            throws URISyntaxException {
        log.info("REST request to save studentDto : {}", studentDto);
        Student std = null;
        try {
            std = studentService.save(studentDto);
//            std =((StudentServiceImpl) studentService).save(studentDto);
        } catch (Exception e) {
            e.printStackTrace();
            return ResponseEntity.badRequest()
                    .body(new SchoolManResponseDto(HttpStatus.INTERNAL_SERVER_ERROR, e.getMessage(), null));
        }
        return ResponseEntity.ok()
                .body(new SchoolManResponseDto(HttpStatus.OK, "SUCCESSFULLY RECORDED", new StudentDto(std)));
    }
}