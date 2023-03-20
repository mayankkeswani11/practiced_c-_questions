/*5. Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits.*/
#include <iostream>
using namespace std;
int mob_no(long long int num)
{
    int k = 0;
    for (int i = 0; num != 0; i++)
    {
        k++;
        num = num / 10;
    }
    if (k == 10)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    cout << "\nenter mobile number :";
    long long int x;
    cin >> x;
    try
    {
        if (mob_no(x) == 0)
        {
            throw exception();
        }
        cout << "valid mobile number";
    }
    catch (...)
    {
        cout << "error exception : invalid mobile_no";
    }
    return 0;
}
