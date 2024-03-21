#include <bits/stdc++.h>
using namespace std;
#define pi 3.14159
class Area
{
public:
    int area_rect(int length, int width)
    {
        return length * width;
    }
    int area_circle(double radious)
    {
        return pi * (radious * radious);
    }    
    int area_square(int side)
    {
        return side * side;
    }    
};
int main()
{
    Area r;
    cout << r.area_rect(10,20) <<endl;
    cout << r.area_circle(20.45) <<endl;
    cout << r.area_square(20);
    return 0;
}