# Write your MySQL query statement below

select a.id as user_id,ifnull(round(b.confo_count/a.total,2),0) as confirmation_rate from(
select ifnull(temp.county,0) as total, ups.user_id as id from Signups as ups left join (select count(user_id) as county ,user_id from Confirmations   group by user_id) as temp on ups.user_id= temp.user_id
) as a 
join
(select ifnull(temp.county,0) as confo_count, ups.user_id as id from Signups as ups left join (select count(user_id) as county ,user_id from Confirmations  where action ='confirmed' group by user_id) as temp on ups.user_id= temp.user_id )as b on a.id = b.id;

