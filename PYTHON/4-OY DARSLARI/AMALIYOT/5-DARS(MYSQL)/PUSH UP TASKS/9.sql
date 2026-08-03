USE schooldb;

-- 21 yoshli barcha talabalarning baliga 5 ball qo'shish
UPDATE students 
SET score = score + 5 
WHERE age = 21;
SELECT * FROM students;