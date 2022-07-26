#include<stdio.h>
int main()
{
    int i,j,nish;
    for ( i = 2; i <= 99; i++)
    {
      for ( j = 2; j <= 100; j++)
      {
        nish=i%j;
        if(i==j)
        printf(" %d",i);
        if(nish==0)
        break;
       
      }
      
    }
    
    return 0;
}