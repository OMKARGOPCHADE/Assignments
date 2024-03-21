#include<bits/stdc++.h>
using namespace std;
class Factorial
{
public:
    void fact(int num)
    {
        int sum = 1;
        for(int i = 1; i <= num; i++)
        {
            sum *=  i;
        }
        cout << "Factorial of " << num <<" is: " << sum;
    }
};
int main()
{
    Factorial f;
    f.fact(10);
    return 0;
}