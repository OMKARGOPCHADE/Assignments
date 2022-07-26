#include <stdio.h>
int main()
{
    int year;
    printf("Enter a Year: ");
    scanf("%d", &year);
    if (year % 4)
    {
        printf("Not leap Year!");
    }
    else if (year % 100)
    {
        printf("leap Year!");
    }
    else if (year % 400)
    {
        printf("Not leap Year!");
    }
    else
    {
        printf("leap Year!");
    }
    return 0;
}
