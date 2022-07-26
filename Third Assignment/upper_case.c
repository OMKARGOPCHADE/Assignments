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
    else
    {
         printf("Special character!");
    }
    
    return 0;
}