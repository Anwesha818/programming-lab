#include<stdio.h>
int main()
//program get gross salary using if else
{
    float basic, hra, da,ta, gross;
    printf("Enter your basic salary: ");
    scanf("%f", &basic);
    if (basic > 15000) {
        hra = 0.20 * basic;
        da = 0.05 * basic;
        ta = 0.10 * basic;
        gross = basic + hra + da + ta;
        printf("Your gross salary is: %.2f\n", gross);
    } else if (basic <= 15000) {
        da = 0.05 * basic;
        ta = 0.10 * basic;
        gross = basic + da + ta;
        printf("Your gross salary is: %.2f\n", gross);
    } else {
        printf("Invalid salary entered.\n");
    }
    return 0;
}