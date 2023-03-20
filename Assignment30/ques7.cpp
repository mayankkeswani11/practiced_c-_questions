/*7. Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol.*/
#include <iostream>
using namespace std;
int username(string nam)
{
    int count = 0;
    int k = 0;
    int j = 0;
    for (int i = 0; nam[i] != '\0'; i++)
    {
        int k = 0;
        if ((nam[i] >= 0 && nam[i] <= 9))
        {
            k = 1;
        }
        if ((nam[i] >= 33 && nam[i] <= 127))
        {
            j = 1;
        }
        else
        {
            cout << "hello";
            return 0;
        }
        count++;
    }
    cout << "count =" << count << endl;
    if (count < 6 || k == 0 || j == 0)
    {
        return 0;
    }
}
int main()
{
    string str;
    cout << "\nenter username:";
    getline(cin, str);
    try
    {
        if (username(str) == 0)
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
