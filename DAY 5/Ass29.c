#include<stdio.h>
int main()
//program to get the electricity bill by units using switch case
{
    float bill;
    float units;
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);
    switch(units <=100 ? 1 : units <=200 ? 2 : units <=1000 ? 3 : 4)
    {
        case 1:
            bill = units * 5;
            printf("Your electricity bill is: %.2f\n", bill);
            break;
        case 2:
            bill = units * 7;
            printf("Your electricity bill is: %.2f\n", bill);
            break;
        case 3:
            bill = units * 10;
            printf("Your electricity bill is: %.2f\n", bill);
            break;
         default:
            printf("Invalid input\n");
            break;
    }
    return 0;
}