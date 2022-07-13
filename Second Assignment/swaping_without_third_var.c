#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nbefore swaping ");
    printf(" a is %d and b is %d",a,b);
    a=a+b;//10+20=30
    b=a-b;//30-20=10
    a=a-b;//30-10=20
    printf("\nafter swaping ");
    printf(" a is %d and b is %d",a,b);
    return 0;
}
