#include <stdio.h>
int main()
{
    int nish=0,n,temp=1,om;
    printf("Enter a Number: ");
    scanf("%d", &n);
    om=n;
 while(n>0)
    {
        temp=n%10;
        nish=nish+temp*temp*temp;
        n=n/10;
    }
    if(nish==om)
    printf("Armstrong number!");
    else
    printf("not Armstrong number!");
    return 0;    
}