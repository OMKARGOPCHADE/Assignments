#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter Two numbers: ");
    scanf("%d %d", &n1, &n2);
    if (n1 > n2)
        printf("First number is Greater");
    if (n1 == n2)

        printf("%d", n1);
    else
        printf("Second number is Greater");

    return 0;
}