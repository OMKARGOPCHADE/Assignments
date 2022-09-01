#include <stdio.h>
int main()
{
    int num;
    printf("Enter a month: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("31 Days in the month!");
        break;
    case 4:
        printf("30 Days in the month!");
        break;
    case 2:
        printf("28 Days in normal year\n29 Days in leap year in the month!");
        break;
    case 3:
        printf("31 Days in the month!");
        break;
    case 5:
        printf("31 Days in the month!");
        break;
    case 7:
        printf("31 Days in the month!");
        break;
    case 8:
        printf("31 Days in the month!");
        break;
    case 9:
        printf("31 Days in the month!");
        break;
    case 12:
        printf("31 Days in the month!");
        break;
    case 6:
        printf("30 Days in the month!");
        break;
    case 10:
        printf("30 Days in the month!");
        break;
    case 11:
        printf("30 Days in the month!");
        break;
    default:
        printf("You Have enterd wrong one");
        break;
    }
    return 0;
}