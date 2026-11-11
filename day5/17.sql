CREATE TABLE Student_Course (
    Student_ID NUMBER,
    Course_ID NUMBER,
    Course_Name VARCHAR2(30),

    CONSTRAINT SC_PK
    PRIMARY KEY (Student_ID, Course_ID)
);
INSERT INTO Student_Course VALUES (101, 1, 'DBMS');
INSERT INTO Student_Course VALUES (101, 2, 'DSA');
INSERT INTO Student_Course VALUES (102, 1, 'DBMS');

COMMIT;
