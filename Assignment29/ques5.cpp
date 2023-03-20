/*5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
 Invent1 s1=(4,5);
 Invent2 d1;
 float tv;
 tv=s1;
 d1=s1;
 return 0;
}*/
#include <iostream>
using namespace std;
class invent1
{
    float a;
    float b;

public:
    invent1()
    {
    }
    invent1(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    invent1 operator=(int b)
    {

        this->b = b;
    }
    int operator()(int x, int y)
    {
        a = x;
        b = y;
        return b;
    }

    operator float()
    {
        return b;
    }
};
int main()
{
    invent1 s1 = (2, 3);
    float x;
    x = (float)s1;
}