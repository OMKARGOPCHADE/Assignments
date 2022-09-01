#include<stdio.h>
void fibonacci(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int i,a=-1,b=1,f=0;
for(i=1;i<=n;i++)
    {
      f=a+b;
      a=b;
      b=f;
       printf(" %d",f);
    }
}