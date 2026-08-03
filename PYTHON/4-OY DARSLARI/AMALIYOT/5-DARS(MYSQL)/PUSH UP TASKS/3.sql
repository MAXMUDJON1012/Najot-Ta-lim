USE schooldb;
USE idrok_school;

INSERT INTO students (fullname, age, city, score) 
VALUES 
    ('Ali', 18, 'Toshkent', 89),
    ('Vali', 19, 'Samarqand', 75),
    ('Hasan', 20, 'Buxoro', 95),
    ('Husan', 21, 'Namangan', 65),
    ('Dilshod', 22, 'Andijon', 81),
    ('Sardor', 18, 'Farg''ona', 90),
    ('Aziz', 19, 'Toshkent', 55),
    ('Kamron', 20, 'Jizzax', 73),
    ('Akmal', 23, 'Xiva', 99),
    ('Jasur', 21, 'Qarshi', 60);

SELECT * FROM  students;
