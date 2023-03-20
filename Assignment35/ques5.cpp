/*5. Write a C++ Program to Add two numbers using function template.*/
#include <iostream>
using namespace std;
template <class t1>
float add(t1 a, t1 b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout << "\nenter two numbers:";
    cin >> a >> b;
    cout << add(a, b);
    return 0;
}