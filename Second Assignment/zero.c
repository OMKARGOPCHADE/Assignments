#include<stdio.h>
int main()
{
    int x,t;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("befor x is %d",x);
    x=x/10;

    printf("\nafter x is %d",x*10);
    return 0;
}
