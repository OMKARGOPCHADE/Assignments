#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    if (count == 3)
    {
        printf("Yes number is three digit number!");
    }
    else
        printf("No The Given Number is Not three digit number");
    
        return 0;
}