#include<stdio.h>
int main()
{
    int n,i;
    float fact=1;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       fact=i*fact;
    }
    printf("The factorial is: %f",fact);
    return 0;
}