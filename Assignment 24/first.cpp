#include <iostream>
using namespace std;
void prime(int);
int main()
{
    int num;
    cout << "Enter A Number: ";
    cin >> num;
    prime(num);
    return 0;
}
void prime(int num)
{
    int i;
    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
            break;
    }
    if (i == num)
        cout << "Yes " << num << " Is Prime Number!";
    else
        cout << "Yes " << num << " Is Not Prime Number!";

}