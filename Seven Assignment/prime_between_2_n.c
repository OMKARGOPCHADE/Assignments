#include<stdio.h>
int main()
{
    int i,j,nish,n1;
    printf("Enter a Number: ");
    scanf("%d",&n1);
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
    printf(" %d",i);
    break;
    }
    }   
    return 0;
}