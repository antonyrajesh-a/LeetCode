# Write your MySQL query statement below
select b.id as id from Weather as a join Weather as b WHERE DATEDIFF(a.recordDate, b.recordDate) = -1 and a.temperature < b.temperature; 

