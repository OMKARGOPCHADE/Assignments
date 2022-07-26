#include<stdio.h>
int main()
{
    int a1,a2,a3,a4,a5;
    printf("Enter 5 Subject marks One by one:\n ");
    printf("Enter 1st subject marks: ");
    scanf("%d",&a1);
     printf("Enter 2nd subject marks: ");
    scanf("%d",&a2);
     printf("Enter 3rd subject marks: ");
    scanf("%d",&a3);
     printf("Enter 4th subject marks: ");
    scanf("%d",&a4);
     printf("Enter 5th subject marks: ");
    scanf("%d",&a5);
    printf("\n");
    float tmarks=500.0,marks,per;
    marks=a1+a2+a3+a4+a5;
    per=marks/tmarks*100;
    if (per>=33)
    printf("The Student is pass and the per is : %f",per);
    else
    printf("The Student is faill per is : %f",per);
    return 0;
}