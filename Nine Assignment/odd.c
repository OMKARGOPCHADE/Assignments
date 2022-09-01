#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch (n%2==0)
    {
    case 1:
        printf("%d",n+1);
        break;
         case 0:
        printf("%d",n);
       break;
    default:
    printf("Invalid Input");
        break;
    }
    return 0;
}