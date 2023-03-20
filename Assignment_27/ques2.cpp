/*Write a C++ program to overload unary operators that is increment and decrement.*/

#include<iostream>
using namespace std;
class overload{
    private:
        int a;
    public:
        overload()
        {
            a=0;
        }
        overload(int b)
        {
            a=b;
        }
        overload operator++()
        {
            cout<<"\npre increment called\n";
            overload c;
            c.a=++a;
            return c;
        }
        overload operator++(int k)
        {
            cout<<"\npost increment called\n";
            overload c;
            c.a=a++;
            return c;
        }
        void show()
        {
            cout<<a;
        }

};
int main()
{
    overload c,c1(5);
    c=++c1;;// pre increment
    c.show();
    c=c1++;//post increment
    c.show(); 
    c=c1++;
    c.show();
    return 0;
}
