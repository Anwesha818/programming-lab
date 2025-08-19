#include<stdio.h>
int main() {
    int a,b,c;
printf("enter the first number: ");
scanf("%d",&a);
printf("enter the second number: ");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("after swapping the first number is %d\n",a);
printf("after swapping the second number is %d\n",b);   
return 0;
}
