#include<stdio.h>   
int main()
//program to check grade of a student using switch case
{
    int marks;
    const char* grade;
    // Get user input for marks
    printf("enter your marks: ");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered.\n");
        return 1;
    }
    switch (marks / 10)
    //here we are using marks/10 to get the tens place of the marks
    {
        case 10:
        case 9:
            if (marks >= 95)
                grade = "A+";
            else
                grade = "A";
            break;
        case 8:
            grade = "B";
            break;
        case 7:
            grade = "C";
            break;
        default:
            grade = "F";
            break;
    }
    printf("your grade is: %s", grade);
    return 0;
}