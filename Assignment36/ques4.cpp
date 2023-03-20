#include <iostream>
#include <array>
using namespace std;
int main()
{
    int index;
    array<int, 10> A = {4, 23, 56, 87, 98, 34, 20, 33, 87, 86};
    cout << "enter index elements :";
    cin >> index;
    try
    {
        if (index >= 10)
        {
            throw index;
        }
        cout << "A[index]=" << A.at(index);
    }
    catch (int x)
    {
        cout << "Array out of bound exception" << endl;
    }
    return 0;
}