#include<iostream>
using namespace std;
int main()
{
    int length, width, height, volume;
    cout << "Enter Length of Cuboid: ";
    cin >> length;
    cout << "Enter Width of Cuboid: ";
    cin >> width;
    cout << "Enter Height of Cuboid: ";
    cin >> height;
    volume = length * width * height;
    cout << "Volume of Cuboid is: "<<volume;
    return 0;
}