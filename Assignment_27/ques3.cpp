/*Write a C++ program to add two complex numbers using operator overloaded by a
friend function.*/
#include<iostream>
using namespace std;
class complex{
    private:
        int real;
        int img;
    public:
        complex()
        {
            real=0;
            img=0;
        }
        complex(int a,int b)
        {
            real=a;
            img=b;
        }
        void show()
        {
            cout<<endl;
            cout<<real<<" + "<<img<<"i";
            
        }
        friend complex operator+(complex,complex);
};
complex operator+(complex c1,complex c2)
{
    complex c;
    c.real=c1.real+c2.real;
    c.img=c1.img+c2.img;
    return c;
}
int main()
{
    complex c,c1(3,4),c2(5,6);
    c=c1+c2;
    c.show();
    return 0;
}

