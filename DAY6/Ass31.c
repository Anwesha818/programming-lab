#include<stdio.h>
int main()
//doing multiplication by using for loop
{
    int i,n;
    printf("Enter the number the user wants to multiply\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
}