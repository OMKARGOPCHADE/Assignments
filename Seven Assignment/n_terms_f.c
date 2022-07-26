#include<stdio.h>
int main()
{
    int n,i,a=-1,b=1,f=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      f=a+b;
      a=b;
      b=f;
       printf(" %d",f);
    }
    return 0;
}