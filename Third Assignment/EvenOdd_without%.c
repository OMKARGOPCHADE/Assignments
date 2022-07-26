#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    n=n&1;
    if (n==0)

        printf("Even Number!");

    else

        printf("Odd Number!");

    return 0;
}
