#include <stdio.h>
int Lcm_of_2(int, int);
int main()
{
    int a, b, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
     printf("Lcm= %d",Lcm_of_2(a,b));
    return 0;
}
int Lcm_of_2(int x, int y)
{
    int i, nish=0;
    for (i = x > y ? x : y; i <= x * y; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            nish = i;
            break;
        }
       
    }
     return nish;
}