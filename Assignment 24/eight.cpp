#include <iostream>
using namespace std;
inline float area(float);
inline int area(int, int);
inline float area(float, float);
int main()
{
    float r = 10.0f;
    int length = 20, breadth = 40;
    float height = 4.0f, base = 3.0f;
    cout << " The area of circle is: " << area(r) << endl;
    cout << "The area of rectrangle is: " << area(length, breadth) << endl;
    cout << "The area of trangle is: " << area(base, height);
    return 0;
}
float area(float r)
{
    return 3.14 * r * r;
}
float area(float b, float h)
{
    return (0.5 * b * h);
//   return b * h;
}
int area(int l, int b)
{
    return l * b;
}