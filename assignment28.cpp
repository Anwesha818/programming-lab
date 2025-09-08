#include <stdio.h>

int main() {
    float basic, hra, ta, da, gross;
    int choice;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("\nMenu:\n");
    printf("1. Calculate HRA\n");
    printf("2. Calculate TA\n");
    printf("3. Calculate DA\n");
    printf("4. Calculate Gross Salary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            hra = 0.20 * basic;
            printf("HRA = %.2f\n", hra);
            break;

        case 2:
            ta = 0.10 * basic;
            printf("TA = %.2f\n", ta);
            break;

        case 3:
            da = 0.05 * basic;
            printf("DA = %.2f\n", da);
            break;

        case 4:
            hra = 0.20 * basic;
            ta = 0.10 * basic;
            da = 0.05 * basic;
            gross = basic + hra + ta + da;
            printf("Gross Salary = %.2f\n", gross);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
