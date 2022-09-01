#include <stdio.h>
int main()
{
    int x, x1, y;
    int a, b, c, d;
    printf("Enter the quadratic equation: \n");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    switch (d > 0)
    {
    case 1:
        printf("no real  roots!");
        break;
    case 0:
        switch (d < 0)
        {
        case 1:
            printf("imaginary roots!");
            break;

        case 0:
        // printf("real & equal roots!");
           switch (d == 0)
            {
            case 1:
                printf("real & equal roots!");
                break;
            }
            
            break;
        }
     break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}