#include<stdio.h>
void n_odd(int);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    n_odd(n);
    return 0;
}
void n_odd(int N)
{
   int i;
   for ( i = 1; i <= N; i++)
   {
  //  if(i%2)
    printf("%d\n",2*i-1);
   }
   
}
