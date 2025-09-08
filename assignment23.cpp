#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);  // space before %c to avoid newline issues

    if (ch == 'A' || ch == 'a') {
        printf("%c is a Vowel.\n", ch);
    }
    else if (ch == 'E' || ch == 'e') {
        printf("%c is a Vowel.\n", ch);
    }
    else if (ch == 'I' || ch == 'i') {
        printf("%c is a Vowel.\n", ch);
    }
    else if (ch == 'O' || ch == 'o') {
        printf("%c is a Vowel.\n", ch);
    }
    else if (ch == 'U' || ch == 'u') {
        printf("%c is a Vowel.\n", ch);
    }
    else {
        printf("%c is a Consonant.\n", ch);
    }

    return 0;
}
