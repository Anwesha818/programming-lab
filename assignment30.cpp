#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    switch(marks / 10) {
        case 10:   // For marks = 100
        case 9:    // 90–99
            if (marks >= 95)
                printf("Grade A+\n");
            else
                printf("Grade A\n");
            break;

        case 8:    // 80–89
            printf("Grade B\n");
            break;

        case 7:    // 70–79
            printf("Grade C\n");
            break;

        default:   // Below 70
            printf("Grade F\n");
    }

    return 0;
}
