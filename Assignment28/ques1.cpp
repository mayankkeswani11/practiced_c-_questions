
/*1. Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator
*/
#include <iostream>
using namespace std;
class Complex
{
    int real;
    int img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int a, int b)
    {
        real = a;
        img = b;
    }
    friend ostream &operator<<(ostream &sout, Complex &c);
    friend istream &operator>>(istream &sin, Complex &c);
};
ostream &operator<<(ostream &sout, Complex &c)
{
    sout << "real =" << c.real << endl;
    sout << "img =" << c.img << endl;
    return sout;
}
istream &operator>>(istream &sin, Complex &c)
{
    cout << "enter real :";
    sin >> c.real;
    cout << "enter img :";
    sin >> c.img;
    return sin;
}
int main()
{
    Complex c1(2, 3);
    Complex c2;
    cout << c1;
    cin >> c2;
    cout << c2;
    return 0;
}
