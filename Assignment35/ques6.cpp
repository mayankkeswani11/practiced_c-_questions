/*6. Write a C++ Program to find Sum of Array using function template.*/
#include <iostream>
using namespace std;
template <class t1>
t1 sum(t1 arr[])
{
    t1 s = 0;
    for (int i = 0; i < 5; i++)
    {
        s = s + arr[i];
    }
    return s;
}
int main()
{
    float arr[5];
    cout << "\nenter elements in array :";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "\nsum =" << sum<float>(arr);
    return 0;
}