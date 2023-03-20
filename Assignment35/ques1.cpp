/*


/*1.Write a C++ program to demonstrate the addition of multiple types of data using
generic functions or templates.*/
#include <iostream>
using namespace std;
template <class t1, class t2 = int, class t3 = float>
t3 add(t1 a, t2 b)
{
    return a + b;
}
int main()
{
    float a, b;
    cout << "\nenter two numbers :";
    cin >> a >> b;
    cout << "the sum is :" << add<int, int, float>(a, b);

    return 0;
}