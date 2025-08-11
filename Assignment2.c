#include <stdio.h>

int main() {
    float num1, num2, sum;
      //Asking fot the user two number
      printf("Enter first number:");
      scanf("%f", &num1);
     //code for taking second number
     printf("Enter second number:");
     scanf("%f", &num2);
     //adding two input values
      sum = num1+num2;
    //Displaying the sum 
    printf("sum = %.2f", sum);
    return 0; 
}