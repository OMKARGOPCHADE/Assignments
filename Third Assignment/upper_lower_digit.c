#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if (c>='a'&& c<='z')
    {
        printf("lowercase character!");
    }
    else if (c>='A'&&c<='Z')
    {
      printf("uppercase character!");
    }
    else if(c>='0'&& c<='9')
    {
         printf("it is a digit!");
    }
    else
    {
         printf("Special character!");
    }
    
    return 0;
}