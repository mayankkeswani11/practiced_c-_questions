/*

9. Write a C++ program to accept Gmail id only and throw an exception if the id does not
contain @ and gmail.com.
10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space.*/

/*Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks.*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "\nenter two number : ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw "denominator cannot be zero";
        }
        if (b == 1)
        {
            throw b;
        }
        if (b == 2)
        {
            throw exception();
        }
        c = a / b;
    }
    catch (const char *str)
    {
        cout << str;
    }
    catch (int x)
    {
        cout << "this is spam condition" << endl;
    }
    catch (...)
    {
        cout << "this is exception from in buit exception class " << endl;
    }
    cout << "\nresult =" << c;
    return 0;
}
