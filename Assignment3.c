#include <stdio.h>

int main() {
    float num1, num2, result;

    //taking two input for substraction
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Subtracting the nnmubers
    result = num1 - num2;

    // Displaying the result
    printf("Result = %.2f\n", result);

    return 0;
}
