#include <stdio.h>
int main()
{
    int n, year;
    printf("Enter a year: ");
    scanf("%d", &n);
    if (n % 4)
    {
        year = 1;
    }
    else if (n % 100)
    {
        year = 2;
    }
    else if (n % 400)
    {
        year = 3;
    }
    else
    {
        year = 4;
    }
    switch (year)
    {
    case 1:
        printf("Not leap Year!");
        break;
    case 2:
        printf("leap Year!");
        break;
    case 3:
        printf("Not leap Year!");
        break;
    case 4:
        printf("leap Year!");
        break;
    default:
        printf("invalid year");
        break;
    }
    return 0;
}