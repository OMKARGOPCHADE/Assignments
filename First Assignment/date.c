#include<stdio.h>
int main()
{
    int d,m,y;
    printf("Enter a date,month and year as given format\n");
    printf("DD/MM/YYY/\n");
    scanf("%d/%d/%d",&d,&m,&y);
     if(d<10&&m<10)
    printf("\n Day - 0%d ,Month - 0%d,Year - %d",d,m,y);
  else  if(d<10)
    printf("\n Day - 0%d ,Month - %d,Year - %d",d,m,y);
    else if(m<10)
    printf("\n Day - %d ,Month - 0%d,Year - %d",d,m,y);
        else 
    printf("\n Day - %d ,Month - %d,Year - %d",d,m,y);
    return 0;
}
