# Write your MySQL query statement below
select name, bonus
from Employee e
left join bonus b
ON e.empId = b.empId
where b.bonus is NULL OR b.bonus < 1000 


