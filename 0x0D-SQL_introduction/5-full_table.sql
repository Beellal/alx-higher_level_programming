-- Script to print the full description of the table first_table
SELECT column_name, column_type, IS_NULLABLE, column_default
FROM information_schema.columns
WHERE table_schema = 'hbtn_0c_0' AND table_name = 'first_table';
