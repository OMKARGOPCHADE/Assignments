#include<bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;
public:
   inline void setData(int i, int j)
    {
        real = i;
        imaginary = j;
    }
   inline void getData()
   {
    cout << real <<" + " << imaginary << " i";
   }
};
int main()
{
    Complex c;
    c.setData(5,3);
    c.getData();
    return 0;
}
