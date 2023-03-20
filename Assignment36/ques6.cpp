/*6. Using STL to check whether an array is empty or not.*/
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> A;
    if (A.empty())
    {
        cout << "NOT EMPTY";
    }
    else
    {
        cout << "EMPTY";
    }
    return 0;
}