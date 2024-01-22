#include <iostream>
using namespace std;
void fib(int);
int main()
{
    fib(8);
    return 0;
}
void fib(int n)
{
    int a = -1, b = 1, f = 0;
    if (n == a || n == b)
    {
        cout << "Yes Available";
    }
    else
    {
        f = a + b;
        while (n > f)
        {
            f = a + b;
            a = b;
            b = f;
        }
    }
    if (f == n)
        cout << "Yes Available";
    else
        cout << "no not available";
}
