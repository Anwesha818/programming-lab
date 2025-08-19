#include <stdio.h>
int main() {
    float r,a;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    a = 3.14 * r * r;
    printf("Area of the circle = %.2f\n", a);
    return 0;
}