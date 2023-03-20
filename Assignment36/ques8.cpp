/*8. Sort an array in descending order using sort() function in C++ STL*/
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;
int main()
{
    int A[5] = {34, 54, 11, 48, 98};
    int length = sizeof(A) / sizeof(A[0]);
    sort(A /*first element pointer*/, A + 5 /*last element pointer*/, greater<int>() /*lambdda funstion*/);
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}
