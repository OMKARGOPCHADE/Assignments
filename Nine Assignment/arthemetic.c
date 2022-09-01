#include <stdio.h>
void Addition();
void Subtraction();
void Multiplication();
void Division();
void choise();
char ch;
int main()
{
    choise();

    switch (ch)
    {
    case 'a':
        Addition();
        break;
    case 'b':
        Subtraction();
        break;
    case 'c':
        Multiplication();
        break;
    case 'd':
        Division();
        break;
    case 'e':
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

    printf("\na. Addition");
    printf("\nb. Subtraction");
    printf("\nc. Multiplication");
    printf("\nd. Division");
    printf("\ne. Exit");
    printf("\n\nEnter your choice: ");
    scanf("%c", &ch);
}
void Addition()
{
    int a, b;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);
    printf("The sum is: %d", (a + b));
}
void Subtraction()
{
    int a, b;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);
    printf("The sub is: %d", (a - b));
}
void Multiplication()
{
    int a, b;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);
    printf("The multiplication is: %d", (a * b));
}
void Division()
{
    int a, b;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);
    printf("The division is: %d", (a / b));
}