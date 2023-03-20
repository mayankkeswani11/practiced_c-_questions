/*3. Overload subscript operator [] that will be useful when we want to check for an index
out of bound.*/
#include <iostream>
using namespace std;
class Array
{
    int a[100];
    int size = 100;

public:
    Array()
    {
    }
    void setdata(int value, int index)
    {
        if (index >= 100)
        {
            cout << "Array out of bound Exception" << endl;
        }
        else
        {
            a[index] = value;
        }
    }
    int operator[](int index)
    {
        if (index >= 100)
        {
            cout << "Array out of bound Exception" << endl;
            exit(0);
        }
        else
        {
            return a[index];
        }
    }
};
int main()
{
    Array a;
    a.setdata(5, 90);
    cout << "a[90] =" << a[90] << endl;
    cout << a[100];
    return 0;
}