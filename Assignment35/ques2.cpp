/*2. Write a C++ Program to find Largest among two numbers using function template.*/
#include <iostream>
using namespace std;
template <class t1, class t2 = float, class t3 = int>
t3 largest(t1 a, t2 b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    float a, b;
    cout << "enter two number :";
    cin >> a >> b;
    cout << largest<int, int, float>(a, b);
    return 0;
}