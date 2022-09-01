#include <stdio.h>
void p_fact(int);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    p_fact(n);
    return 0;
}
void p_fact(int N)
{
    int i, j, comb;
    for (i = 2; i <= N; i++)
    {
        for (j = 2; j <= N; j++)
        {
            comb = i % j;
            if (i == j)
            {
                if (N % i == 0)
                    printf("The Factors of %d is:%d\n", N, i);
                if (comb == 0)
                    break;
            }
        }
    }
}
