#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 1; i <=5 ; i++)
    {
      for ( j = 1; j <=19 ; j++)
      {
        if(j>=3+i&&j<=13-i)
        printf("*");
        else
        printf(" ");
      }
      printf("\n");
    }
    
    return 0;
}