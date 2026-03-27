# Write your MySQL query statement below
select p.firstName, p.lastName, s.city, s.state
FROM person p
LEFT JOIN Address s
ON p.personId = s.personId;