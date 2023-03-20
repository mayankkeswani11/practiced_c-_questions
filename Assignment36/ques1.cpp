/*

10. Given an integer array nums , return an array answer such that answer[i] is equal to
the product of all the elements of nums except nums[i] */

/*Using STL Array gets and sets a reference to an element based on a given index.*/
#include <iostream>
#include <array>
#include <tuple>
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
    return 0;
}
