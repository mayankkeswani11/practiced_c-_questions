/*Write a C++ program to add two numbers using single inheritance. Accept these two
numbers from the user in base class and display the sum of these two numbers in
derived class.*/
#include <iostream>
using namespace std;
class base
{
protected:
    int a;
    int b;

public:
    void setdata()
    {
        cout << "enter 2 number:";
        cin >> a;
        cin >> b;
    }
};
class derived : public base
{
public:
    int sum()
    {
        cout << "sum =" << a + b;
    }
};
int main()
{
    derived d;
    d.setdata();
    d.sum();
}