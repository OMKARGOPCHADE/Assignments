#include<stdio.h>
int main()
{
    float USD1=76.23;//1 USD IS INR=76.23 
    float INR;
    double USD;
    printf("Enter a Amount in INR: ");
    scanf("%f",&INR);
    USD=INR/USD1;
    printf(" The USD is : %lf",USD);
    return 0;
}
