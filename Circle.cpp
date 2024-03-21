#include <bits/stdc++.h>
using namespace std;
#define pi 3.14159
class Circle
{
public:
    int area(double radious)
    {
        return pi * (radious * radious);
    }
};
int main()
{
    Circle a;
    double ans =  a.area(13.2);
    printf("%lf",ans);
    return 0;
}