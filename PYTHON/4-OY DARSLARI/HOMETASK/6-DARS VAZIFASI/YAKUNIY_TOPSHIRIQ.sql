CREATE DATABASE IF NOT EXISTS edu_center;
USE edu_center;
CREATE TABLE IF NOT EXISTS students (
    student_id INT AUTO_INCREMENT PRIMARY KEY,
    full_name VARCHAR(100),
    phone VARCHAR(20),
    city VARCHAR(50),
    registered_date DATE
);
CREATE TABLE IF NOT EXISTS courses (
    course_id INT AUTO_INCREMENT PRIMARY KEY,
    course_name VARCHAR(100),
    duration_month INT,
    price INT,
    course_status VARCHAR(20)
);
CREATE TABLE IF NOT EXISTS enrollments (
    enrollment_id INT AUTO_INCREMENT PRIMARY KEY,
    student_id INT,
    course_id INT,
    enrollment_date DATE,
    status VARCHAR(20)
);
INSERT INTO students (full_name, phone, city, registered_date)
VALUES 
('Ali Valiyev', '+998901112233', 'Toshkent', '2026-07-01'),
('Malika Karimova', '+998902223344', 'Samarqand', '2026-07-03'),
('Jasur Sobirov', '+998903334455', 'Buxoro', '2026-07-05'),
('Madina Aliyeva', '+998904445566', 'Toshkent', '2026-07-07'),
('Bekzod Rahimov', '+998905556677', 'Andijon', '2026-07-10'),
('Shahnoza Abdullayeva', '+998906667788', 'Namangan', '2026-07-12')
;

INSERT INTO courses (course_name, duration_month, price, course_status) 
VALUES 
('Python Backend', 6, 800000, 'active'),
('MySQL Database', 3, 600000, 'active'),
('Frontend Development', 6, 750000, 'active'),
('Grafik dizayn', 4, 500000, 'active'),
('Kompyuter savodxonligi', 2, 350000, 'inactive');

INSERT INTO enrollments (student_id, course_id, enrollment_date, status) 
VALUES 
(1, 1, '2026-07-15', 'active'),
(1, 2, '2026-07-16', 'active'),
(2, 2, '2026-07-16', 'active'),
(3, 3, '2026-07-18', 'active'),
(4, 1, '2026-07-20', 'completed'),
(2, 3, '2026-07-22', 'cancelled');


SELECT s.student_id, s.full_name, s.city, c.course_name, c.price, e.enrollment_date, e.status
FROM enrollments e
INNER JOIN students s ON e.student_id = s.student_id
INNER JOIN courses c ON e.course_id = c.course_id;

SELECT s.full_name, c.course_name, c.duration_month, c.price, e.status
FROM enrollments e
INNER JOIN students s ON e.student_id = s.student_id
INNER JOIN courses c ON e.course_id = c.course_id
WHERE e.status = 'active';

SELECT s.full_name, s.phone, s.city, c.course_name, e.enrollment_date
FROM enrollments e
INNER JOIN students s ON e.student_id = s.student_id
INNER JOIN courses c ON e.course_id = c.course_id
WHERE c.course_name = 'MySQL Database';

SELECT s.full_name, c.course_name, c.price, e.status
FROM enrollments e
INNER JOIN students s ON e.student_id = s.student_id
INNER JOIN courses c ON e.course_id = c.course_id
WHERE c.price > 600000;

SELECT s.full_name, s.city, c.course_name, e.enrollment_date
FROM enrollments e
INNER JOIN students s ON e.student_id = s.student_id
INNER JOIN courses c ON e.course_id = c.course_id
WHERE s.city = 'Toshkent';

SELECT s.full_name, s.phone, s.city, c.course_name, c.price, e.enrollment_date, e.status
FROM enrollments e
INNER JOIN students s ON e.student_id = s.student_id
INNER JOIN courses c ON e.course_id = c.course_id
ORDER BY s.full_name ASC;

SELECT s.student_id, s.full_name, s.city, c.course_name, e.status
FROM students s
LEFT JOIN enrollments e ON s.student_id = e.student_id
LEFT JOIN courses c ON e.course_id = c.course_id;

SELECT s.student_id, s.full_name, s.phone, s.city, s.registered_date
FROM students s
LEFT JOIN enrollments e ON s.student_id = e.student_id
WHERE e.enrollment_id IS NULL;

SELECT c.course_id, c.course_name, c.price, s.full_name, e.status
FROM courses c
LEFT JOIN enrollments e ON c.course_id = e.course_id
LEFT JOIN students s ON e.student_id = s.student_id;

SELECT c.course_id, c.course_name, c.duration_month, c.price, c.course_status
FROM courses c
LEFT JOIN enrollments e ON c.course_id = e.course_id
WHERE e.enrollment_id IS NULL;

SELECT s.student_id, s.full_name, COUNT(e.course_id) AS kurslar_soni
FROM students s
LEFT JOIN enrollments e ON s.student_id = e.student_id
GROUP BY s.student_id, s.full_name;

SELECT c.course_id, c.course_name, COUNT(e.student_id) AS talabalar_soni
FROM courses c
LEFT JOIN enrollments e ON c.course_id = e.course_id
GROUP BY c.course_id, c.course_name;

SELECT c.course_name, c.price, s.full_name, e.enrollment_date, e.status
FROM enrollments e
LEFT JOIN students s ON e.student_id = s.student_id
RIGHT JOIN courses c ON e.course_id = c.course_id;

SELECT c.course_name, c.price, c.course_status
FROM enrollments e
RIGHT JOIN courses c ON e.course_id = c.course_id
WHERE e.enrollment_id IS NULL;

SELECT s.full_name, s.city, c.course_name, e.status
FROM enrollments e
LEFT JOIN courses c ON e.course_id = c.course_id
RIGHT JOIN students s ON e.student_id = s.student_id;

SELECT s.full_name, s.phone, s.city
FROM enrollments e
RIGHT JOIN students s ON e.student_id = s.student_id
WHERE e.enrollment_id IS NULL;

SELECT s.full_name, s.city, c.course_name, c.price
FROM students s
CROSS JOIN courses c;

SELECT s.full_name, c.course_name, c.course_status, c.price
FROM students s
CROSS JOIN courses c
WHERE c.course_status = 'active';

SELECT s.full_name, s.city, c.course_name, c.price
FROM students s
CROSS JOIN courses c
WHERE s.city = 'Toshkent';

SELECT s.full_name, c.course_name, c.price
FROM students s
CROSS JOIN courses c
WHERE c.price >= 600000
ORDER BY c.price DESC;

SELECT s.full_name, c.course_name, c.price, e.status
FROM enrollments e
INNER JOIN students s ON e.student_id = s.student_id
INNER JOIN courses c ON e.course_id = c.course_id
WHERE s.full_name = 'Ali Valiyev';

SELECT s.full_name, c.course_name, e.enrollment_date, e.status
FROM enrollments e
INNER JOIN students s ON e.student_id = s.student_id
INNER JOIN courses c ON e.course_id = c.course_id
WHERE e.status = 'cancelled';

SELECT s.full_name, c.course_name, e.status
FROM enrollments e
INNER JOIN students s ON e.student_id = s.student_id
INNER JOIN courses c ON e.course_id = c.course_id
WHERE e.status = 'completed';

SELECT s.student_id, s.full_name, COUNT(e.course_id) AS yozilgan_kurslar_soni
FROM enrollments e
INNER JOIN students s ON e.student_id = s.student_id
GROUP BY s.student_id, s.full_name
HAVING COUNT(e.course_id) > 1;

SELECT c.course_name, c.price, COUNT(e.student_id) AS talabalar_soni
FROM enrollments e
INNER JOIN courses c ON e.course_id = c.course_id
GROUP BY c.course_id, c.course_name, c.price
ORDER BY talabalar_soni DESC
LIMIT 1;

SELECT s.full_name, c.course_name, c.price, e.status
FROM enrollments e
INNER JOIN students s ON e.student_id = s.student_id
INNER JOIN courses c ON e.course_id = c.course_id
WHERE c.price = (SELECT MAX(price) FROM courses);