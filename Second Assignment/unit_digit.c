#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    //a=a/10;
    printf("unit digit of a %d is %d",a,(a%10));
    return 0;
}
