#include <stdio.h>
int main() {
	
    int roll;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    if (roll == 100) {
        printf("Roll 100 is present.\n");
    }
    if (roll != 100) {
        printf("Roll 100 is NOT present.\n");
    }

    return 0;
}
