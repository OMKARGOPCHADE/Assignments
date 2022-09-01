#include<stdio.h>
void prime(int,int);
int main()
{
    int n1,n2;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&n1,&n2);
    prime(n1,n2);
      
    return 0;
}
void prime(int a,int b)
{
    int i,j,nish;
for ( i = a; i <= b; i++)
    {
      for ( j = 2; j <= i; j++)
      {
        nish=i%j;
        if(i==j)
        printf(" %d",i);
        if(nish==0)
        break;
       
      }
      
    }
}