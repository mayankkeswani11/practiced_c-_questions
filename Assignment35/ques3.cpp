/*3. Write a C++ program to find the largest of three elements using a template.*/
#include <iostream>
using namespace std;
template <class t1, class t2, class t3, class t4>
t4 largest(t1 a, t2 b, t3 c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
int main()
{
    float a, b, c;
    cout << "\nenter two numbers:";
    cin >> a >> b >> c;
    cout << largest<int, int, int, int>(a, b, c);
    return 0;
}