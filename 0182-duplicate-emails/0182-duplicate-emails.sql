SELECT
    email AS Email
FROM Person
GROUP BY email
HAVING COUNT(*) > 1;# Write your MySQL query statement below
