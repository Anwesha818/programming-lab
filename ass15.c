#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c, d, root1, root2;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);
    d = b*b - 4*a*c;
    if (d < 0) {
        printf("Roots are imaginary.\n");
    } else {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    }
    return 0;
}
