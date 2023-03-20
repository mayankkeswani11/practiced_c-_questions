/*9. C++ program to find the integers which come an odd number of times in an array
using C++ STL.*/
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;
int main()
{
    array<int, 10> A = {34, 54, 34, 34, 48, 54, 48, 98};
    int arr[100] = {0};
    for (int i = 0; i < A.size(); i++)
    {
        arr[A[i]]++;
    }
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}