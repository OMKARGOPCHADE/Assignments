#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nbefore swaping ");
    printf(" a is %d and b is %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nafter swaping ");
    printf(" a is %d and b is %d",a,b);
    return 0;
}
