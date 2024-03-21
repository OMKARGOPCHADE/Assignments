#include <bits/stdc++.h>
using namespace std;
class Rectrangle
{
public:
    int area(int length, int width)
    {
        return length * width;
    }
};
int main()
{
    Rectrangle r;
    cout << r.area(10,20);
    return 0;
}