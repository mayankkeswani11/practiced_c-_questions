/*8. Write a C++ program to find the factorial of a number using copy constructor*/
#include <iostream>
using namespace std;
class fact
{
private:
    int fac;

public:
    fact()
    {
        fac = 1;
    }
    fact(int a)
    {
        fac = a;
    }
    fact(fact &c)
    {
        fac = c.fac;
    }
    int getdata()
    {
        return fac;
    }
    friend int factorial(fact &);
    void display()
    {
        cout << "factorial =" << fac;
    }
};
int factorial(fact &f)
{
    fact f1(5);
    int facts = 1;
    for (int i = 1; i <= f1.getdata(); i++)
    {
        facts = facts * i;
    }
    return facts;
}

int main()
{
    fact f1(5);
    cout << "factorial of " << f1.getdata() << " = " << factorial(f1) << endl;
    return 0;
}