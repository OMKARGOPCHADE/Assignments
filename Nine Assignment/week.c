#include <stdio.h>
int main()
{
    int num;
    printf("Enter a day: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Word helth day!");
        break;
    case 2:
        printf("Love Day!");
        break;
    case 3:
        printf("First meetup Day!");
        break;
    case 4:
        printf("breakup day!");
        break;
    case 5:
        printf("i love you!");
        break;
    case 6:
        printf("i hate you!");
        break;
    case 7:
        printf("i need you!");
        break;

    default:
        printf("You Have enterd wrong one");
        break;
    }
    return 0;
}