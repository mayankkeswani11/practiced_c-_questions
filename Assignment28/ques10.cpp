/*10. Create a Distance class having 2 instance variable feet and inches. Also create
default constructor and parameterized constructor takes 2 variables . Now overload ()
function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15.*/
#include <iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;

public:
    Distance()
    {
    }
    Distance(int a, int b)
    {
        feet = a;
        inches = b;
    }
    Distance operator=(Distance d)
    {
        cout << "assignment operator callled" << endl;
        feet = d.feet;
        inches = d.inches;
    }
    Distance operator()(int a, int b, int c)
    {
        Distance d;
        d.feet = a + c + 5;
        d.inches = a + b + 15;
        return d;
    }
    void display()
    {
        cout << "feet =" << feet << ","
             << "inches =" << inches << endl;
    }
};
int main()
{
    Distance d;
    Distance d1;
    Distance d2;
    d1 = d(3, 4, 5);
    d2 = d1;
    d1.display();
    d2.display();
}