#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
      sum=i+sum;
    }
    printf("The sum of even \nnatural numbers is: %d",sum);
    return 0;
}