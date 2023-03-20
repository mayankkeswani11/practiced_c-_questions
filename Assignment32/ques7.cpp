/*7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.*/
#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "constructor of A() called" << endl;
    }
};
class B : public A
{
public:
    B() : A()
    {
        cout << "constructor of B() called" << endl;
    }
};
int main()
{
    B a;
    return 0;
}