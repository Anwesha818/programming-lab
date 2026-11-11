CREATE TABLE Student_Marks (
    Student_ID NUMBER,
    Course_ID NUMBER,
    Marks NUMBER,

    CONSTRAINT SM_FK
    FOREIGN KEY (Student_ID, Course_ID)
    REFERENCES Student_Course(Student_ID, Course_ID)
);
INSERT INTO Student_Marks VALUES (101, 1, 85);
INSERT INTO Student_Marks VALUES (101, 2, 90);
INSERT INTO Student_Marks VALUES (102, 1, 88);

COMMIT;
