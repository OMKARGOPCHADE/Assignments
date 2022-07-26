#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     n=n/10;
      
    }
    printf("The digits are: %d",i);
    return 0;
}