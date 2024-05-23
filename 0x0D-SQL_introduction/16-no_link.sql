-- Script to list all records of the table second_table from the database hbtn_0c_0
-- Only list rows with a name value
-- Display the score and the name in this order
-- List records by descending score

SELECT score, name
FROM second_table
WHERE name IS NOT NULL
ORDER BY score DESC;
