#include<stdio.h>
int main()
{
    int i,j,n;
    for ( i = 1; i <=4 ; i++)
    {
        n=1;
      for ( j = 1; j <=7 ; j++)
      {
        if(j<=3+i&&j>=5-i)
        {
          printf("%d",n);
          j>3?n--:n++;
        }
        else
        {
         printf(" ");
        if(j==0)
        n--; 
        }
      }
      printf("\n");
    }
    
    return 0;
}