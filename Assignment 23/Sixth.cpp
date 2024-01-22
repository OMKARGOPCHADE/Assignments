#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, Avg;
    cout << "Enter Three Numbers: ";
    cin >> num1 >> num2 >> num3;
    Avg = (num1 + num2 + num3) / 3;
    cout << "Average of Three Numbers is: " << Avg;
    return 0;
}