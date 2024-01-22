#include<iostream>
using namespace std;
void input(int arr[])
{
  for (int i = 0; i < 10; i++)
  {
    cout << "Enter number for index " << i + 1 << " : ";
    cin >> arr [i];
  }
  
}
int addition(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum = arr[i] + sum;
    }
    
    return sum;
}
int main()
{
    int arr[10], sum;
    input(arr);
    sum = addition(arr);
    cout << " The Addition is: " << sum;
    return 0;
}
