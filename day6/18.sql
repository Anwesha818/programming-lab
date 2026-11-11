SELECT E_ID || ', ' || FNAME || ', ' ||
       LNAME || ', ' ||
       TO_CHAR(HIRE_DATE,'DD-Mon-RR') || ', ' ||
       JOB_ID || ', ' || SAL || ', ' ||
       DEPT_ID AS EMPLOYEE_DETAILS
FROM EMP;
