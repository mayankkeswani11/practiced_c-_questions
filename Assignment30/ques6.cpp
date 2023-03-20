/*6. Write a C++ program to accept area pin code and throw an exception if it does not
contain 6 digits.*/
#include <iostream>
using namespace std;
int pin_code(long long int x)
{
    int count = 0;
    for (int i = 0; x != 0; i++)
    {
        count++;
        x = x / 10;
    }
    if (count != 6)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    long long int x;
    cout << "enter pin code :";
    cin >> x;
    try
    {
        if (pin_code(x) == 0)
        {
            throw exception();
        }
        cout << "valid pin code" << endl;
    }
    catch (...)
    {
        cout << "invalid pin code excepetion" << endl;
    }
    return 0;
}
