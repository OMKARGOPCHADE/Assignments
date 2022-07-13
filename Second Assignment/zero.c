#include<stdio.h>
int main()
{
    int x,t;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("befor x is %d",x);
    x=x/10;
    x=x*10+(x<0?0:0);
    printf("\nafter x is %d",x);
    return 0;
}
