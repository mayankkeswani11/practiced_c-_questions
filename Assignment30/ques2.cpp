/*2. Write a C++ program to demonstrate try, throw and catch statements.*/
#include <iostream>
using namespace std;
class exception1
{

public:
    exception1()
    {
    }
    void fun1(char *str)
    {
        if (str == NULL)
            throw str;
    }
    void fun2(int x)
    {
        if (x == 0)
        {
            throw x;
        }
    }
};
int main()
{
    exception1 s;
    try
    {
        try
        {
            s.fun1(NULL);
            throw s;
        }
        catch (char *str)
        {
            cout << "\n null exception error occur";
        }
        s.fun2(0);
        throw s;
    }
    catch (char *str)
    {
        cout << "\n null exception error occur";
    }
    catch (...)
    {
        cout << "\ndefault exception callled";
    }
}
