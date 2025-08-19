#include <stdio.h>
 
 int main() {
    float F,C;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);
    C = (F - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2f\n", C);
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);        
    F = (C * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", F);
    return 0;
 }