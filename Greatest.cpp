#include <bits/stdc++.h>
using namespace std;
class Greatest_num
{
public:
    void large_number(int num1, int num2, int num3)
    {
        if (num1 > num2 && num1 > num3)
            cout << "Largest Number among three numbers is: " << num1;
        else if (num2 > num3 && num2 > num1)
            cout << "Largest Number among three numbers is: " << num2;
        else
            cout << "Largest Number among three numbers is: " << num3;
    }
};
int main()
{
    Greatest_num gn;
    gn.large_number(10,20,30);
    return 0;
}