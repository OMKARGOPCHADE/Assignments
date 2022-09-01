#include<stdio.h>
void n_natural(int);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    n_natural(n);
    return 0;
}
void n_natural(int N)
{
   int i;
   for ( i = 1; i <= N; i++)
   {
    printf("%d\n",i);
   }
   
}
