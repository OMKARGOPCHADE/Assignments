#include <iostream>
using namespace std;
int main()
{
    float Area, PI = 3.14f, Radius;
    cout << "Enter Radious of Circle: ";
    cin >> Radius;
    Area = PI * (Radius * Radius);
    cout << "The Area of Circle is : " << Area;
    return 0;
}