#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    switch(units <= 100) {
        case 1:  // If units <= 100
            bill = units * 5;
            break;

        case 0:  // If units > 100
            switch(units <= 200) {
                case 1:  // If units between 101–200
                    bill = (100 * 5) + (units - 100) * 7;
                    break;

                case 0:  // If units > 200
                    bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
                    break;
            }
            break;
    }

    printf("Total Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}

