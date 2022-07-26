#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
   do
    {
       printf("%d\n",n+1-i);
       i++;
    } while (i<=n);
    
    return 0;
}