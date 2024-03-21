#include <iostream>
using namespace std;
inline void swapp(int &, int &);
int main()
{
    int a, b;
    cout << "Enter  two numbers: ";
    cin >> a >> b;
    cout << endl;
    cout << "After Swapped values are = a : " << a << " || b : " << b;
    swapp(a, b);
    cout << endl;
    cout << "After Swapped values are = a : " << a << " || b : " << b;
    return 0;
}
void swapp(int &a, int &b)
{
    a = a + b; // 9 = 4 + 5
    b = a - b; // 4 = 9 - 5
    a = a - b; // 5 = 9 - 4
}