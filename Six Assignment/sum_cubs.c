#include<stdio.h>
int main()
{
    int n,i,sum=0,c=0;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=i*i*i;
      sum=c+sum;
    }
    printf("The sum is: %d",sum);
    return 0;
}