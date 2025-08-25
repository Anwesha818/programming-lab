#include<stdio.h>
int main() {
    int a,lastdigit1,lastdigit2;
    printf("Enter a integer: ");
    scanf("%d",&a);
    lastdigit1=a%10;
    //as bt devide by 10 it will give the last digit
    printf("Last digit of %d is %d\n",a,lastdigit1);
    lastdigit2=a-(a/10)*10;
    //this is another method to find last digit
    printf("Last digit of %d is %d\n",a,lastdigit2);
    return 0;
}