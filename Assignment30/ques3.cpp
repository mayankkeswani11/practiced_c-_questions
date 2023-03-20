/*3. Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.*/
#include <iostream>
using namespace std;
int exception_program(int a, int b)
{
    int c;
    if (b == 0)
    {
        throw "dividend is zero";
    }
    c = a / b;
    return c;
}
int main()
{
    int a, b, c;
    cout << "\nenter two numbers:";
    cin >> a >> b;
    try
    {
        c = exception_program(a, b);
    }
    catch (const char *str)
    {
        cout << str << endl;
    }
    catch (...)
    {
        cout << "default exception called" << endl;
    }
    cout << "result =" << c;
    return 0;
}