#include <stdio.h>
int main()
{
    int n, i, a = -1, b = 1, f = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == a || n == b)
    {
        printf("fibonnaci!");
    }
    else
    {
        f = a + b;
        while (n > f)
        {
            a = b;
            b = f;
            f = a + b;
        }
    }
    if (n == f)
        printf("fibonnaci!");
    else
        printf("not fibonnaci!");
    return 0;
}