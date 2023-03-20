/*2. Write a C++ program to convert Complex type to Primitive type.
 Example -
 int main()
{
 Complex c1;
 c1.setData(3,4);
 int x;
 x=c1;
 return 0;
}*/
#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
        complex()
        {
            real=0;
            img=0;
        }
        void setdata(int a,int b){
            real=a;
            img=b;
        }
        operator int(){
            return real;
        }
};
int main()
{
    complex c1;
    c1.setdata(3,4);
    int x;
    x=c1;
    cout<<"value of x ="<<x;
    return 0;
}