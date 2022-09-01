#include<stdio.h>
float simple_i(float,float,float);
int main()
{
    int p,t;
    float r;
    printf("Enter a Principl: ");
    scanf("%d",&p);
    printf("Enter a Time period: ");
    scanf("%d",&t);
    printf("Enter a rate of intrest: ");
    scanf("%f",&r);
    printf("Simple intrest is: %f", simple_i(r,p,t));
    return 0;
}
float simple_i(float R,float P,float T)
{
    return P*R*T/100;
}
