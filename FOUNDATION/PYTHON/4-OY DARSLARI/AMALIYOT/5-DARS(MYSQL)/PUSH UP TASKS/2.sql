show DATABASES;
use schooldb;
CREATE Table if not exists students(
    id int AUTO_INCREMENT PRIMARY key,
    fullname  VARCHAR(100),
    age int,
    city VARCHAR(50),
    score int
);
