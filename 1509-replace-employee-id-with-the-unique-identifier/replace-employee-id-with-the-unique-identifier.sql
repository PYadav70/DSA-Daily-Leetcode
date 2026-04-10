# Write your MySQL query statement below
select uni.unique_id as unique_id , e.name as name
from employees e
left join employeeuni uni
on e.id = uni.id