#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2)
      sum=i+sum;
    }
    printf("The sum of odd\n natural numbers is: %d",sum);
    return 0;
}