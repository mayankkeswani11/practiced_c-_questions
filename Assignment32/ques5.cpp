/*5. Define a class A having multiple constructors. Define another class B derived from
class A. Create derived class constructors and show use of constructor in this single
inheritance.*/
#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Dc of class A called" << endl;
    }
    A(int a)
    {
        cout << "Pc of class A called" << endl;
    }
};
class B : public A
{
public:
    B() : A()
    {
        cout << "Dc of class B called" << endl;
    }
    B(int a) : A(6)
    {
        cout << "Pc of class B called" << endl;
    }
};
class constructors : public B
{
public:
    constructors() : B(5)
    {
        cout << "Dc of class constructors called" << endl;
    }
};
int main()
{
    constructors c;
    return 0;
}