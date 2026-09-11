USE schooldb;
UPDATE students 
SET score = score + 5 
WHERE age = 21;
SELECT * FROM students;