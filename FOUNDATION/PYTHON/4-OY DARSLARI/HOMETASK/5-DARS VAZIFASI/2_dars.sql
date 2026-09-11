USE shifoxona;


INSERT INTO bemorlar (fio, yosh, kasalligi, telefon) 
VALUES 
    ('Aliyev Vali', 25, 'Gripp', '+998901112233'),
    ('Karimova Lola', 17, 'Tish og''rig''i', '+998912223344'),
    ('Rustamov Jasur', 45, 'Gripp', '+998933334455'),
    ('Tursunova Aziza', 30, 'Allergiya', '+998944445566'),
    ('Nazarov Bekzod', 15, 'Shamollash', '+998955556677'),
    ('Qodirov Alisher', 50, 'Qon bosimi', '+998977778899'),
    ('Olimova Malika', 22, 'Gripp', '+998988889900'),
    ('Murodov Sardor', 35, 'Bosh og''rig''i', '+998999990011'),
    ('Jalilova Sevara', 19, 'Ko''z og''rig''i', '+998901234567'),
    ('Ismoilov Botir', 60, 'Yurak kasalligi', '+998912345678');

SELECT * FROM bemorlar;


SELECT * FROM bemorlar 
WHERE yosh > 18;

SELECT * FROM bemorlar 
WHERE kasalligi = 'Gripp';


UPDATE bemorlar 
SET telefon = '+998990001122' 
WHERE id = 1;

UPDATE bemorlar 
SET kasalligi = 'Sog''lom' 
WHERE id = 4;


DELETE FROM bemorlar 
WHERE id = 10;


SELECT * FROM bemorlar;