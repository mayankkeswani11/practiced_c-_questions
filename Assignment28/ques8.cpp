/*8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.*/
#include <iostream>
using namespace std;
class Coordinate
{
    int x, y, z;

public:
    Coordinate(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Coordinate()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    Coordinate operator,(Coordinate c1)
    {
        cout << "\ncomma operator called" << endl;
        Coordinate c2;
        c2.x = c1.z;
        c2.y = c1.x;
        c2.z = c1.y;
        return c2;
    }
    void display()
    {
        cout << "x= " << x << " y =" << y << " z = " << z << endl;
    }
};
int main()
{
    Coordinate c1(2, 3, 4), c2(5, 6, 7);
    Coordinate c3;
    c2.display();
    c3 = (c1, c2);
    c3.display();
}