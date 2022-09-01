#include<stdio.h>
int main()
{
    int i,j,n;
    for ( i = 1; i <=7 ; i++)
    {
        n=65;
      for ( j = 1; j <=13 ; j++)
      {
        if(j<=8-i||j>=6+i)
        {
        printf("%c",n);
        j<7?n++:n--;
        }
        else
        {
        printf(" ");
         if(j==7)
        n--; 
        }
      }
      printf("\n");
    }
    
    return 0;
}