#include<bits/stdc++.h>
using namespace std;
class Time
{
private:
    int seconds;
    int minutes;
    int hours;

public:
    inline void setTime(int h, int m, int s)
    {
        seconds = s;
        minutes = m;
        hours = h;
    }
    inline void getTime()
    {
        cout << hours << ":" << minutes << ":" << seconds;
    }
};
int main()
{
    Time t;
    t.setTime(06,07,15);
    t.getTime();
    return 0;
}