#include <stdio.h>
int hcf(int,int);
int main()
{
    int a, b, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
   printf("Hcf is: %d",hcf(a,b));
    return 0;
}
int hcf(int a,int b)
{
    int i;
     for (i = a < b ? a : b; i <= a + b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
            break;
        }
        else
        {
            return 1;
            break;
        }
    }
}