#include <iostream>
using namespace std;
int add(int, int);
double add(double, double);
;
int main()
{
    cout << add(5, 8);
    cout << endl;
    cout << add(55.60, 66.73);
    return 0;
}
int add(int a, int b)
{
    return a + b;
}
double add(double a, double b)
{
    return a + b;
}