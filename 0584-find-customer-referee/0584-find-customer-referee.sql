# Write your MySQL query statement below
SELECT name from Customer where name not in (select name where referee_id = 2)