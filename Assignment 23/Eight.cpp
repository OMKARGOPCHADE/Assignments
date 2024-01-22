#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter Two Numbers: ";
    cin >> a >> b;
    cout << " Before Swapping Values: a = " << a <<" b = " << b;
    a = a + b; // 20 + 10 = 30
    b = a - b; // 30 - 10 = 20 
    a = a - b; // 30 - 20 = 10
    cout << " After Swapping Values: a = " << a <<" b = " << b;
    return 0;
}