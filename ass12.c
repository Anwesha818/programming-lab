#include<stdio.h>
int main() {
    float a;
    int p,r,n,t;
    printf("Enter principal value: ");
    scanf("%d",&p);
    printf("Enter rate of interest: ");
    scanf("%d",&r);
    printf("Enter time in years: ");
    scanf("%d",&t);
    printf("Enter number of times interest applied per time period: ");
    scanf("%d",&n);
    a=p*(1+(r/n)^nt);
    printf("Amount after %d years is %.2f\n",t,a);
    return 0;
}
