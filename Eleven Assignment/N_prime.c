#include <stdio.h>
void N_prime(int);
int main()
{
    int n, i;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    N_prime(n);
    return 0;
}
void N_prime(int n)
{
     int i,x=2;
   while (n)
   {
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        break;
    }
    if(i==x)
    {
    printf("%d ",x);
    n--;
    }
    x++;
   }
   
}