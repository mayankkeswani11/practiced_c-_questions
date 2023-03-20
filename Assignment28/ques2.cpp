/*2. Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables.*/

#include<iostream>
using namespace std;
class complex {
    int real;
    int img;
    public:
        complex()
        {
            real=0;
            img=0;
        }
        complex(int real,int img)
        {
            this->real=real;
            this->img=img;
        }
        void display(){
            cout<<"real ="<<real;
            cout<<" img ="<<img<<endl;
        }
};
int main()
{
    complex c1;
    complex c2(3,5);
    c1.display();
    c2.display();
}