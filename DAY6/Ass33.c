#include <stdio.h>
int main() {
// Write a c program to print the factorial of a number using for loop.
int n, i;
long long fact = 1;
// long long is used to store large factorials
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Show error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;              // fact = fact*i;
            printf("After multiplying by %d, fact = %lld\n", i, fact);
        }
        printf("Factorial of %d = %lld", n, fact);
    }

    return 0;
}                                                                           
