#include<stdio.h>
int main()
{
    int i,j,m=5;
    for ( i = 5; i >=1 ; i--)
    {
      for ( j = 1; j <m ; j++)
      printf(" ");
        for(int k=1;k<=2*i-1;k++)
        {
        if(k==1||k==2*i-1||i==5)
        printf("*");
        else
        printf(" ");
      }
      m++;
      printf("\n");
    }
    
    return 0;
}