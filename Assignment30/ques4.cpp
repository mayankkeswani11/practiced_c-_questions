/*4. Write a C++ program to accept an email address and throw an exception if it does not
contain @ symbol.*/
#include <iostream>
using namespace std;
int email_check(string ptr)
{
    int k = 0;
    for (int i = 0; i < ptr[i] != '\0'; i++)
    {
        if (ptr[i] == '@')
        {
            return 1;
        }
        else
        {
            k = 0;
        }
    }
    if (k == 0)
    {
        return 0;
    }
}
int main()
{
    string str;
    cout << "\nenter the email address :";
    getline(cin, str);
    try
    {
        if (email_check(str) == 0)
        {
            throw exception();
        }
        cout << "valid email address";
    }
    catch (...)
    {
        cout << "email does not conatin @ Therefore not an valid email address" << endl;
    }
    return 0;
}
