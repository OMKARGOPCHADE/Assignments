#include <iostream>
using namespace std;
int max(int, int);
float max(float, float);
int main()
{
    cout << max(10, 22) << endl;
    cout << max(22.3, 24.5) << endl;
    return 0;
}
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
float max(float a, float b)
{
    if (a > b)
        return a;
    else
        return b;
}