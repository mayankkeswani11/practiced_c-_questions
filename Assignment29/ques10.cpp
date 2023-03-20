/*10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.
Example int main()
{
 Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
 return 0;
}*/
#include <iostream>
using namespace std;
class Rupee
{
    float r;

public:
    Rupee()
    {
    }
    Rupee(float x)
    {
        r = x;
    }
    void display()
    {
        cout << "rupee =" << r << endl;
    }
    float get_rupee()
    {
        return r;
    }
};
class Dollar
{
    float d;

public:
    Dollar()
    {
    }
    Dollar(float x)
    {
        d = x;
    }
    Dollar(Rupee r1)
    {
        d = r1.get_rupee() / 100;
    }
    operator Rupee()
    {
        return d * 100.0;
    }
    void display()
    {
        cout << "dollar =" << d << endl;
    }
};
int main()
{
    Rupee r = 230;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    d = 4;
    r = (Rupee)d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}