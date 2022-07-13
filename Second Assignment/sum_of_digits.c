#include<stdio.h>
int main()
{
    int a,sum=0,temp=0;
    printf("Enter a numbers: ");
    scanf("%d",&a);
   
    temp=a%10;//143%10=3
    a=a/10;//143/10=14
    sum=temp;//3
    temp=a%10;//14%10=4
    sum=sum+temp;//3+4=7
    a=a/10;//1
    sum=sum+a;//7+1=8
    printf("%d",sum);
    return 0;
}
