#include <iostream>
using namespace std;
int BigDigit(int);
int noofdigit(int);
int main()
{
    int num;
    cout << " Enter A Number: ";
    cin >> num;
    cout << "The Highest Digit in " << num << " is " << BigDigit(num);
    return 0;
}
int BigDigit(int num)
{
    int digit, i=0, n;
    n = noofdigit (num);
    int temp[n];
    while (num)
    {
        digit = num % 10;
        temp [i] = digit;
        num = num / 10;
        ++ i; 
    }
    digit = temp[0];
   for ( i = 1; i <= n; i++)
   {
     if (digit < temp [i])
       digit = temp[i];
   }
   
    return digit;
}
int noofdigit(int num)
{
    int count = 0;
    while (num)
    {
        count ++;
        num = num / 10;
    }
    return count;
}