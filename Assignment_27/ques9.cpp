/*Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).
*/
#include <iostream>
#include <string.h>
using namespace std;
class mystring
{
    char str[100];

public:
    mystring()
    {
    }
    char set_data()
    {
        cout << "\nenter string :";
        gets(str);
        str[strlen(str)] = '\0';
    }
    int operator!()
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'a' & str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
            else
            {
                if (str[i] >= 'A' & str[i] <= 'Z')
                    str[i] = str[i] + 32;
                else
                    str[i] = str[i] + 0;
            }
        }
    }
    void display()
    {
        cout << str << endl;
    }
};
int main()
{
    mystring s;
    s.set_data();
    s.display();
    !s;
    s.display();
}
