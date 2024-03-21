#include <bits/stdc++.h>
using namespace std;
class Square
{
private:
    int count = 0;
public:
    inline int square(int num)
    {
        count++;
        int sq = 1;
        sq = (num * num);
        return sq;
    }
    inline int cnt_function_call()
    {
        return count;
    }
};
int main()
{
    Square sq;
    cout << sq.square(2) <<endl;
    cout << sq.square(5) <<endl;
    cout << sq.square(6) <<endl;
    cout << sq.square(7) <<endl;
    cout << sq.square(8);
    cout << endl;
    cout << sq.cnt_function_call();
    return 0;
}