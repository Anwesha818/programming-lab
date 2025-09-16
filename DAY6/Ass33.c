#include<stdio.h>
int main()
//square of the first 10 odd natural numbers and their sum
{
    int i,sum=0;
    for(i=1;i<=19;i+=2)
    {
        //
        printf("The square of %d odd natural number is %d\n",i,i*i);
    }
        sum=sum+(i*i);
    printf("The sum of the squares of the first 10 odd natural numbers is %d\n",sum);
    return 0;
}