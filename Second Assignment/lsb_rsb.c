#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    b=(a&-(a-1));
    printf("%d",b);
    return 0;
}
