/*4. Write a C++ Program to Swap data using function template.*/
#include <iostream>
using namespace std;
template <class t1, class t2>
void swap(t1 &a, t2 &b)
{
    t1 c;
    c = a;
    a = b;
    b = c;
}
int main()
{
    float a, b;
    cout << "\nenter two numbers:";
    cin >> a >> b;
    swap<float, float>(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    char c, d;
    cout << "\nenter two character:";
    cin >> c >> d;
    swap<char, char>(c, d);
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;
    return 0;
}