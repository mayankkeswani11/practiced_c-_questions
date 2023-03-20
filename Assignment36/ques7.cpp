/*7. Sort an array in ascending order using sort() function in C++ STL*/
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
    int A[5] = {34, 23, 11, 45, 33};
    int len = 5;
    sort(A, A + len, greater<int>());
    for (int i = 0; i < len; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    sort(A, A + len);
    for (int i = 0; i < len; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}