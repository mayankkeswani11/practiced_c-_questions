/*8. Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter.*/
#include <iostream>
using namespace std;
int password(char nam[])
{
    int count = 0;
    int k = 0;
    int j = 0;
    int m = 0;
    for (int i = 0; nam[i] != '\0'; i++)
    {
        if ((nam[i] >= 0 && nam[i] <= 9))
        {
            cout << "k called" << endl;
            k = 1;
        }
        if ((nam[i] >= 91 && nam[i] <= 127) || nam[i] >= 31 && nam[i] <= 65)
        {
            cout << "j called" << endl;
            j = 1;
        }
        if (nam[i] >= 65 && nam[i] <= 90)
        {
            cout << "m called" << endl;
            m = 1;
        }
        count++;
    }
    cout << "count =" << count << endl;
    if (count < 6 || k == 0 || j == 0 || m == 0)
    {
        return 0;
    }
}
int main()
{
    char str[10];
    cout << "\nenter username:";
    cin >> str;
    try
    {
        if (password(str) == 0)
        {
            throw exception();
        }
        cout << "valid username";
    }
    catch (...)
    {
        cout << "invalid username" << endl;
    }
    return 0;
}
