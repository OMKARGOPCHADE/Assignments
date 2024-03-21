#include <bits/stdc++.h>
using namespace std;
class Reverse_number
{
public:
    int reverse_number(int num)
    {
        int temp = 0;
        int new_num = 0;
        while (num > 0)
        {
            temp = num % 10;
            new_num = (new_num * 10) + temp;
            num = num / 10;
        }
        return new_num;
    }
};
int main()
{
    Reverse_number rn;
    cout << rn.reverse_number(1242);
    return 0;
}