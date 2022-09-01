#include<stdio.h>
float area(float);
int main()
{
    float R;
    printf("Enter Radius: ");
    scanf("%f",&R);
    printf("Area Of circle is %f having radius %f", area(R),R);
    return 0;
}
float area(float r)
{
    return r*r*3.14;
}
