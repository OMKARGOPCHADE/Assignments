#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
  printf("The factorial is: %d",fact(n));
    return 0;
}
int fact(int N)
{
   int i;
   int sum=1;
   for ( i = 1; i <= N; i++)
   {
    sum=i*sum;
    
   }
   return sum;
}
