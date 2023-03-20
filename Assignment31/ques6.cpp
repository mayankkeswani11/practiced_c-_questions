/*Write a C++ program to demonstrate how a common friend function can
be used to exchange the private values of two classes. (Use call by
reference method).
*/
#include <iostream>
using namespace std;
class A
{
private:
    void privatefunA()
    {
        cout << "this is private of A " << endl;
    }

public:
    friend int exchange();
};
class B : public A
{
private:
    void privatefunB()
    {
        cout << "this is private of B " << endl;
    }

public:
    friend int exchange();
};
int exchange()
{
    B b;
    b.privatefunA();
    b.privatefunB();
}
int main()
{
    exchange();
    return 0;
}