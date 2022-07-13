#include <stdio.h>
int main()
{
    int x, d;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("enter a digt: ");
    scanf("%d",&d);
    printf("befor adding the digit number is %d", x);
     x = x * 10 + (x < d? 0 : d);
    printf("\nafter adding a digit the number is : %d", x);
    return 0;
}
