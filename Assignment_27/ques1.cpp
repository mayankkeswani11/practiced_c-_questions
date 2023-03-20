/*Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==*/
#include<iostream>
using namespace std;
class Complex{
    private:
        int real;
        int img;
    public:
        Complex()
        {
            real=0;
            img=0;
        }
        Complex(int a,int b)
        {
            real=a;
            img=b;
        }
        Complex operator+(Complex c1)
        {
            cout<<"\n+ operator is called : ";
            Complex c;
            c.real=real+c1.real;
            c.img=img+c1.img;
            return c;
        }
        void showdata()
        {
            cout<<real<<" + "<<img<<"i";
            cout<<endl;
        }
        Complex operator-(Complex c1)
        {
            cout<<"\n- operator is called : ";
            Complex c;
            c.real=real-c1.real;
            c.img=img-c1.img;
            return c;
        }
        Complex operator*(Complex c)
        {
            cout<<"\n* operator is called : ";
            Complex C1;
            C1.real=real*c.real;
            C1.img=img*c.img;
            return C1;
        }
        bool operator==(Complex c)
        {
            cout<<"\n== operator called";
            if(real==c.real&&img==c.img)
            {
                return true;
            }
            else{
                return false;
            }
        }
};
int main()
{
    Complex c,c1(3,4),c2(3,4);
    c=c1+c2;//addition
    c.showdata();
    c=c1-c2;//negative
    c.showdata();
    c=c1*c2;//multiplication
    c.showdata();
    if(c1==c2)
    {
        cout<<"\nEqual complex numbers";
    }
    else{
        cout<<"\nnot equal complex number";
    }
    return 0;

}