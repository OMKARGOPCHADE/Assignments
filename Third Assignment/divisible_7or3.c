#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n%7==0||n%3==0)
    {
      printf("Yes divisible by 7 || 3!");
    }
    else
    {
         printf("Not divisible by 7 || 3!");
    }
    
    return 0;
}