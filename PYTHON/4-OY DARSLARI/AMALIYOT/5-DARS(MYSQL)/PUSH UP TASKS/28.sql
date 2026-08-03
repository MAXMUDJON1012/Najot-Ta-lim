USE schooldb;
DROP TABLE IF EXISTS students_copy;

CREATE TABLE students_copy AS 
SELECT * FROM students;
SELECT * FROM students_copy 
WHERE score BETWEEN 70 AND 100 
LIMIT 3;