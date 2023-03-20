/*2. Using STL Array returns the total number of elements in the array.*/
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 10> A;
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    cout << "size =" << A.size();
    return 0;
}
