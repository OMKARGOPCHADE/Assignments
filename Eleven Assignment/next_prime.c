#include<stdio.h>
int next_prime(int n);
int main()
{
    int n1;
    printf("Enter a Number: ");
    scanf("%d",&n1);
    printf("Next prime is: %d",next_prime(n1));
    return 0;
}
int next_prime(int n1)
{
    int i,j,nish;
    for ( i = n1+1; i > 0; i++)
    {
         nish=0;
      for ( j = 1; j <= i; j++)
      {
        if(i%j==0)
        nish++;
      }
    if(nish==2)
    {
   return i;
    break;
    }
    }   
}