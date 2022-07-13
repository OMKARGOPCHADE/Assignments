#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    if ((n|1)>n)
    printf("even number");
    else
    printf("Odd number");
    
    return 0;
}
