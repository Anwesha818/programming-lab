#include <stdio.h>

int main() {
    char toss;

    printf("Enter the result of coin toss (H for Head, T for Tail): ");
    scanf(" %c", &toss);   

    if (toss == 'H' || toss == 'h') {
        printf("It is Head.\n");
    }
    if (toss == 'T' || toss == 't') {
        printf("It is Tail.\n");
    }

    return 0;
}
