package ac.rca.java.controller;
import ac.rca.java.model.StudentModel;
import ac.rca.java.utils.Db;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

public class StudentController {
    public boolean register(StudentModel student) throws SQLException {
        String sql = "INSERT INTO student(registration_number,first_name,last_name,gender,birth_date,department_id) VALUES(?,?,?,?,?,?)";
        PreparedStatement preparedStatement = Db.getConnection().prepareStatement(sql);
        preparedStatement.setString(1,student.getRegNumber());
        preparedStatement.setString(2,student.getFirstName());
        preparedStatement.setString(3,student.getLastName());
        preparedStatement.setString(4,student.getGender());
        preparedStatement.setString(5,student.getBirthDate());
        preparedStatement.setInt(6,student.getDepartmentId());

        if (preparedStatement.executeUpdate() > 0) return true;
        else return false;
    }
    public List<StudentModel> getAllStudents() throws SQLException {
        List<StudentModel> students = new ArrayList<>();

        Statement statement = Db.getStatement();
        ResultSet resultSet = statement.executeQuery("SELECT * FROM student");
        while (resultSet.next()){
            students.add(
                    new StudentModel(
                            resultSet.getInt("id"),
                            resultSet.getString("registration_number"),
                            resultSet.getString("first_name"),
                            resultSet.getString("last_name"),
                            resultSet.getString("gender"),
                            resultSet.getString("birth_date"),
                            resultSet.getInt("department_id")
                    )
            );
        }
        return students;
    }
}
