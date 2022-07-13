#include<stdio.h>
int main()
{
    float A,R;
    printf("Enter Radius: ");
    scanf("%f",&R);
    A=R*R*3.14;
    printf("Area Of circle is %f having radius %f",A,R);
    return 0;
}
