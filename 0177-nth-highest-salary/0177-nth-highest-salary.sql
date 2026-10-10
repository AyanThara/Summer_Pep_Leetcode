CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      WITH RankedEmployees AS (
          SELECT salary, DENSE_RANK() OVER (ORDER BY salary DESC) AS `rank`
          FROM Employee
      )
      SELECT MAX(salary)
      FROM RankedEmployees
      WHERE `rank` = N
  );
END
