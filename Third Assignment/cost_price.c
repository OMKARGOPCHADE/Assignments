#include <stdio.h>
int main()
{
    int cp, sp;
    printf("Enter a cost price : ");
    scanf("%d", &cp);
    printf("Enter a selling price : ");
    scanf("%d", &sp);
    if (cp<sp)
    {
       float p,net;
        net=sp-cp;
       p=net/cp*100;
      printf("profit percentage is: %f%c",p,37);
    }
    else if (cp==sp)
    {
        printf("No profit! No loss!");
    }
    else
    {
       float p,net;
       net=cp-sp;
       p=net/cp*100;
      printf("loss percentage is: %f%c",p,37);
    }
    
    return 0;
}