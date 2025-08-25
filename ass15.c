#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c,d,n;
    printf("Enter the value of a: ");
    scanf("%f",&a); 
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);
    d=sqrt(b*b-4*a*c);
    n=(-b+d)/(2*a);
    printf("the value of root is %.2f\n",n);
     n=(-b-d)/(2*a);
    return 0;
}