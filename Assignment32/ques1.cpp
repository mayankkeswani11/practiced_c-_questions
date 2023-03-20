
/*Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they can operate on the objects of FLOAT.*/
#include <iostream>
using namespace std;
class FLOAT
{
private:
    float var;

public:
    FLOAT()
    {
        var = 0;
    }
    FLOAT(int a)
    {
        var = a;
    }
    FLOAT operator+(FLOAT value)
    {
        FLOAT sum;
        sum.var = var + value.var;
        return sum;
    }
    FLOAT operator-(FLOAT value)
    {
        FLOAT neg;
        neg.var = var - value.var;
        return neg;
    }
    FLOAT operator*(FLOAT value)
    {
        FLOAT mul;
        mul.var = var * value.var;
        return mul;
    }
    FLOAT operator/(FLOAT value)
    {
        FLOAT mul;
        mul.var = var / value.var;
        return mul;
    }
    void display()
    {
        cout << "var=" << var << endl;
    }
};
int main()
{
    FLOAT f, f1(6), f2(7);
    f = f1 + f2;
    f.display();
    f = f2 - f1;
    f.display();
    f = f1 * f2;
    f.display();
    f = f2 / f1;
    f.display();
    return 0;
}
