#include <stdio.h>
int main()
{
    float n, amount = 0, total = 0;
    printf("Enter a units: ");
    scanf("%f", &n);
    switch (n <= 50)
    {
    case 1:
        amount = n * 0.5;
        break;
    case 0:
        switch (n <= 150)
        {
        case 1:
            amount = 25 + (n - 50) * 0.75;
            break;
        case 0:
            switch (n <= 250)
            {
            case 1:
                amount = 100 + (n - 150) * 1.20;
                break;
            case 0:
                amount = 220 + (n - 250) * 1.5;
                break;
            }
            break;
        }
        break;
    default:
    printf("invild units");
        break;
    }
    total = amount + amount * 0.20;
    printf("Total amount = %f", total);
    return 0;
}