#include <stdio.h>
int main()
{
    int a, b, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (i = a < b ? a : b; i <= a + b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("Hcf= %d", i);
            break;
        }
        else
        {
            printf("Hcf=1");
            break;
        }
    }
    return 0;
}