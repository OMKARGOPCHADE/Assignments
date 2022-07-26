#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter Three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3)
        printf("First number is Greater");
    else if (n2 > n3 && n2 > n1)
        printf("Second number is Greater");
    else if (n3 > n2 && n3 > n1)
        printf("Third number is Greater");
    else if (n1 == n2 && n1 == n3 && n3 == n2)

        printf("%d", n1);

    return 0;
}