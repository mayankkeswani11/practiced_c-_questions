/*





7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.


10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result*/
//################################################
/*1. Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)*/

#include<iostream>
using namespace std;
class Complex{
    private:
        int a,b;
    public:
        void SetData(int real,int img)
        {
            a=real;
            b=img;
        }
        void showData()
        {
            cout<<"\ncomplex no :"<<a<<" + "<<b<<" i";
        }
        Complex add(Complex c)
        {
            Complex sum;
            sum.a=a+c.a;
            sum.b=b+c.b;
            return sum;
        }  
};
int main()
{
    Complex c,c1,c2;
    c1.SetData(5,7);
    c2.SetData(4,9);
    c1.showData();
    c2.showData();
    c=c1.add(c2);
    c.showData();
}

