<%--
  Created by IntelliJ IDEA.
  User: ntwari fle
  Date: 5/28/2021
  Time: 6:46 AM
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<%@taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>

<html>
<head>
    <title>Title</title>
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
<center><h2>Student Profile Details</h2></center>

<p style="margin-left: 40em;font-size: 16px">First Name: <strong><c:out value="${studentView.firstName}" /></strong></p>
<p style="margin-left: 40em;font-size: 16px">Last Name: <strong><c:out value="${studentView.lastName}" /></strong></p>
<p style="margin-left: 40em;font-size: 16px">Gender: <strong><c:out value="${studentView.gender}" /></strong></p>
</body>
</html>
