#include<stdio.h>
int main()
{
    int n,i,temp=0,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      temp=n%10;
      rev=rev*10+temp;
      n=n/10;
    }
    printf("The reverse is: %d",rev);
    return 0;
}