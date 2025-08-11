#include <stdio.h>

int main() {
    char ch;

    // Taking input for chracter
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Printing ASCII value of the input character given by user
    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
