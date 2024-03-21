#include <iostream>
using namespace std;
inline int add(int, int = 0, int = 0);
int main()
{
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;
    cout << " The sum is: " << add(a);
    cout << endl;
    cout << " The sum is: " << add(a, b);
    cout << endl;
    cout << " The sum is: " << add(a, b, c);
    return 0;
}
int add(int a, int b, int c)
{
    return a + b + c;
}