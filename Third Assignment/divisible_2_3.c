#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n%2==0&&n%3==0)
    {
      printf("Yes divisible by 2 & 3!");
    }
    else
    {
         printf("Not divisible by 2 & 3!");
    }
    
    return 0;
}