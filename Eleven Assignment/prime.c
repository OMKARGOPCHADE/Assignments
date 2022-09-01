#include <stdio.h>
int prime_not(int);
int main()
{
    int n, i;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    if (prime_not(n))
        printf("The number is prime");
    else
        printf("The number is not prime");
    return 0;
}
int prime_not(int n)
{
    int i;
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i == n)
        return 1;
    else
        return 0;
}