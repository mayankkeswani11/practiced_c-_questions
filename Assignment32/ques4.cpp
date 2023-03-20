/*4. Define a class Addition that can add 2 or 3 numbers of different data types using
function overloading.*/
#include <iostream>
using namespace std;
class Addition
{
    float ad;

public:
    int add(int a, int b, int c = 0)
    {
        ad = a + b + c;
        return ad;
    }
    double add(double a, double b, double c = 0)
    {
        ad = a + b + c;
        return ad;
    }
    double add(int a, double b, int c = 0)
    {
        ad = a + b + c;
        return ad;
    }
};
int main()
{
    Addition a;
    cout << "addition =" << a.add(5, 6) << endl;
    cout << "addition =" << a.add(6.6, 7.8, 8.6) << endl;
    cout << "addition =" << a.add(6, 7.8, 8) << endl;
    return 0;
}