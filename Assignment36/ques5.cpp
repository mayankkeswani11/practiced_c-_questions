/*5. C++ STL program to demonstrate example of array::rbegin() and array::rend()
functions*/
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> A = {23, 44, 25, 26, 27};
    for (auto i = A.rbegin(); i != A.rend(); i++)
    {
        cout << *i << " ";
    }
    return 0;
}