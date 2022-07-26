#include <stdio.h>
int main()
{
    int nish, temp, om, i;
    for ( i = 1; i <= 1000; i++)
    {
        nish=0;
        om=i;
        while (om != 0)
        {
            temp = om % 10;
            nish = nish + temp * temp * temp;
            om = om / 10;
        }
        if(nish==i)
        printf(" %d",i);
    }
    return 0;
}