#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter length of sides of a tringle: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c&&a+c>b&&c+b>a)
    {
       printf("Valid tringle!");
    }
    else
    {
        printf("Not Valid tringle!");
    }
    
    return 0;
}