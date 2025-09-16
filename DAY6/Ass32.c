#include<stdio.h>
int main()
//sum of n natural numbers
{
    int i,n,sum=0;
    printf("Enter the number the user wants to sum\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of the %d natural numbers is %d\n",n,sum);
    return 0;
}
