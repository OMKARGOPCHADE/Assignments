#include<stdio.h>
int main()
{
    int a,b=0,c=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a!=0){
        b=a&1;
        c++;
        if(b==1)
            printf("%d",c);
        a=a>>1;
    }
    
    return 0;
}
