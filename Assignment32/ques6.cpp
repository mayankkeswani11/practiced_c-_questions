/*
6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your
choice.
*/

#include <iostream>
using namespace std;
class A
{
public:
    void fun1()
    {
        cout << "fun1() called of A" << endl;
    }
};
class B
{

public:
    void fun1()
    {
        cout << "fun1() called of B" << endl;
    }
};
class C : public A, public B
{
};
int main()
{
    C obj;
    obj.B::fun1();
    return 0;
}