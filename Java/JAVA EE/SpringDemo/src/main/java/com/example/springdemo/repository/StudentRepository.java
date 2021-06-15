package com.example.springdemo.repository;

import com.example.springdemo.model.Student;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface StudentRepository extends JpaRepository<Student,Long> {
    /*Dynamic finders*/

    List<Student> findByFirstName(String firstName);
    List<Student> findByFirstNameAndLastName(String firstName,String lastName);
    List<Student> findByFirstNameOrLastName(String firstName,String lastName);

    // Query By HQL
    @Query(value = "select stb from Student stb where stb.firstName=:firstNameParam and stb.lastName=:lastNameParam")
    List<Student> findFirstNameAndLastNameHql(@Param("firstNameParam")String cdvdvdv, @Param("lastNameParam") String sdfjjhsdfhdfjh);

    // Query By SQL
    @Query(value = "select * from student_tbl stb where stb.first_name=:firstNameParam and stb.last_name=:lastNameParam", nativeQuery = true)
    List<Student> findByFirstNameAndLastNameSql(@Param("firstNameParam")String firstName,@Param("lastNameParam")String lastName);
}