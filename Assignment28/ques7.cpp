/*7. Create an Integer class and overload logical not operator for that class.*/
#include <iostream>
using namespace std;
class Integer
{
    int a;

public:
    Integer(int a)
    {
        this->a = a;
    }
    Integer()
    {
    }
    Integer operator!()
    {
        Integer i;
        i.a = -a;
        return i;
    }
    void display()
    {
        cout << a;
    }
};
int main()
{
    Integer i1(4), i2;
    i2 = !i1;
    i2.display();
}
