#include<stdio.h>
int main() {
    //making a simple calculator using switch case
    char operator;
    double first, second, result;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);
    switch (operator) {
        case '+':
            result = first + second;
            printf("%.2lf + %.2lf = %.2lf\n", first, second, result);
            break;
        case '-':
            result = first - second;
            printf("%.2lf - %.2lf = %.2lf\n", first, second, result);
            break;
        case '*':
            result = first * second;
            printf("%.2lf * %.2lf = %.2lf\n", first, second, result);
            break;
        case '/':
            if (second != 0) {
                result = first / second;
                printf("%.2lf / %.2lf = %.2lf\n", first, second, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }