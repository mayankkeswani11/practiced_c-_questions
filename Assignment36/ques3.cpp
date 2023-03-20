/*3. Find the first and last element using the STL array.*/
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 10> A;
    cout << "enter elements :";
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    cout << "\nfirst element =" << A.front();
    cout << "\nlast element =" << A.back();
    return 0;
}