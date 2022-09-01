#include <stdio.h>
void isosceles();
void r_triangle();
void equilateral();
void Division();
void choise();
char ch;
int main()
{
    choise();

    switch (ch)
    {
    case 'a':
        isosceles();
        break;
    case 'b':
        r_triangle();
        break;
    case 'c':
        equilateral();
        break;
    case 'd':
        printf("Thank You..!");
        break;
    default:
        printf("You Have enterd wrong one");
        //  choise();

        break;
    }

    return 0;
}
void choise()
{

    printf("\na. check whether a given set of three\n numbers are lengths of sides an\nisosceles triangle or not");
    printf("\nb. check whether a given set of three\n numbers are lengths of sides a\n right angled triangle or not");
    printf("\nc. check whether a given set of three\n numbers are equilateral triangle or not\n");
    printf("\nd. Exit");
    printf("\n\nEnter your choice: ");
    scanf("%c", &ch);
}
void isosceles()
{
    int a, b, c;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b || b == c || a == c)
        printf("yes it is isosceles triangle!");
    else
        printf("no it is not a isosceles triangle!");
}
void r_triangle()
{
    int a, b, c;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (c * c == a * a + b * b)
        printf("yes it right angled triangle!");
    else
        printf("no it is not a right angled triangle!");
}
void equilateral()
{
    int a, b, c;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b == c)
        printf("yes it is equilateral triangle!");
    else
        printf("no it is not a equilateral triangle!");
}