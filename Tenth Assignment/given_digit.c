#include <stdio.h>
int digit_n(int, int);
int main()
{
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit: ");
    scanf("%d", &digit);
    if (digit_n(num, digit))
        printf("Yes its contains a given digit!");
    else
        printf("No its not contains a given digit!");

    return 0;
}
int digit_n(int n, int d)
{ 
    int N;
    while (n)
    {
        N=n%10;
        if(N==d)
        return 1;
        n=n/10;
    }
    return 0;
}