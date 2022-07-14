#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    n=n&1;
    if (n==0)
    printf("even number");
    else
    printf("Odd number");
    
    return 0;
}
