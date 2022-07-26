#include<stdio.h>
int main()
{
int x,x1,y;
int a,b,c,d;
printf("Enter thr quadratic equation: \n");
scanf("%d %d %d",&a,&b,&c);
d=b*b-4*a*c;
if (d==0)
{
printf("real & equal roots!");
}
else if (d<0 )
{
   printf("imaginary roots!");
}
else
{
    printf("no real  roots!");
}

return 0;
}