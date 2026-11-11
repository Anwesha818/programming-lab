SELECT 'The movie taken by ' || C.FNAME || ' ' ||
       C.LNAME || ' is ' || M.TITLE || '.' AS DETAILS
FROM Customer C, Invoice I, Movie M
WHERE C.CUST_ID = I.CUST_ID
AND I.MV_NO = M.MV_NO
AND I.MV_NO >= 3;
