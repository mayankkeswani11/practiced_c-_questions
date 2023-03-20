/*Assignment – 29 A Job Ready Bootcamp in C++, DSA and IOT MySirG
Type Casting and Conversion










/*1.Write a C++ program to convert Primitive type to Complex type.
 Example -
 int main()
{
 Complex c1;
 Int x=5;
 c1=x;
 return 0;
}*/
#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int a, int b)
    {
        real = a;
        img = b;
    }
    complex operator=(int x)
    {
        real = x;
        img = x;
    }
    void display()
    {
        cout << "complex no :" << real << "+" << img << "i" << endl;
    }
};
int main()
{
    complex c;
    int x = 5;
    c = x;
    c.display();
    return 0;
}