CREATE DATABASE IF NOT EXISTS shifoxona;


USE shifoxona;


CREATE TABLE IF NOT EXISTS bemorlar (
    id INT AUTO_INCREMENT PRIMARY KEY,
    fio VARCHAR(100) NOT NULL,
    yosh INT,
    kasalligi VARCHAR(100),
    telefon VARCHAR(20)
);