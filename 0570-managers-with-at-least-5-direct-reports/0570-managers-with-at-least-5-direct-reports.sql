# Write your MySQL query statement below


select e.name from 
Employee as e join 
(select count(b.id) as county, b.id from Employee as a join Employee as b on a.managerId = b.id group by b.id) as temp on temp.id=e.id where temp.county>=5 ;
