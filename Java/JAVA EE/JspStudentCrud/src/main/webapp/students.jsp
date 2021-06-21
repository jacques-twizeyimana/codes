<%@ page language="java" contentType="text/html; charset=UTF-8"
         pageEncoding="UTF-8"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<html>
<head>
    <title>Students Management</title>
</head>
<body style="font-family: Manrope">
<center>
    <h1 style="background: #1146AD;color: white;padding: 30px 20px;font-size: 16px;">Students Management</h1>
    <h2>
        <a href="/JspStudentCrud_war_exploded/new">Add New Student</a>
        &nbsp;&nbsp;&nbsp;
        <a href="/JspStudentCrud_war_exploded/list">List All Students</a>
    </h2>
</center>
<div align="center">
    <table border="1" cellpadding="5">
        <caption><h2>List of All Students</h2></caption>
        <tr>
            <th>student id</th>
            <th>first name</th>
            <th>last name</th>
            <th>gender</th>
            <th>Actions</th>
        </tr>
        <c:forEach var="student" items="${listStudent}">
            <tr>
                <td><c:out value="${student.id}" /></td>
                <td><c:out value="${student.firstName}" /></td>
                <td><c:out value="${student.lastName}" /></td>
                <td><c:out value="${student.gender}" /></td>
                <td>
                    <a href="/JspStudentCrud_war_exploded/edit?id=<c:out value='${student.id}' />">Edit</a>
                    &nbsp;&nbsp;&nbsp;&nbsp;
                    <a href="/JspStudentCrud_war_exploded/delete?id=<c:out value='${student.id}' />">Delete</a>
                    <a href="/JspStudentCrud_war_exploded/view?id=<c:out value='${student.id}' />">View</a>

                </td>
            </tr>
        </c:forEach>
    </table>
</div>
</body>
</html>