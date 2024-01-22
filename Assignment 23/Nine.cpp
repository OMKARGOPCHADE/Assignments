#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter Two Numbers To Find Maximum: ";
    cin >> num1 >> num2;
    num1 > num2 ? cout << "Number " << num1 << " Is Maximum." : cout << "Number " << num2 << " Is Maximum.";
    return 0;
}