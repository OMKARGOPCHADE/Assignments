#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      sum=i+sum;
    }
    printf("The sum is: %d",sum);
    return 0;
}