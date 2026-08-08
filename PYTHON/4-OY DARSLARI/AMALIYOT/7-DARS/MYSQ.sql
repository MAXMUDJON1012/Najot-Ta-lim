CREATE DATABASE school;
USE school;
CREATE table Students (
      id int primary key auto_increment,
      fullname varchar (100),
      age  INT,
      phone VARCHAR (20),
      score int
);
create table guruhlar (
    id int primary key auto_increment, 
    nomi varchar(100), studentID int, 
    created_at datetime, 
    yonalish varchar(100) ,
    foreign key (studentID) References students(id)
    );



