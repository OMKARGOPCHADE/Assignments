#include <stdio.h>
int even_odd(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (even_odd(n))
        printf("Even number");
    else
        printf("Odd number");
    return 0;
}
int even_odd(int r)
{
    if (r % 2 == 0)

        return 1;

    else

        return 0;
}
