#include<stdio.h>
int main()
{
    int n,i,sum=0,s=0;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=i*i;
      sum=s+sum;
    }
    printf("The sum of squres is: %d",sum);
    return 0;
}