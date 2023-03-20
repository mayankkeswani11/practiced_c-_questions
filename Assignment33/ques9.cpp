/*9. Create a base class called volume. Use this class to store two double type values
that could be used to compute the volume of figures. Derive two specific classes
called cube and sphere from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_volume() to compute and display the volume of figures. Make
display_volume() as a virtual function and redefine this function in the derived
classes to suit their requirements.
Using these three classes, design a program that will accept dimensions of a cube
or a sphere interactively, and display the volume.*/
#include <iostream>
using namespace std;
class Volume
{
private:
    double x;
    double y;

protected:
    int return_x()
    {
        return x;
    }
    int return_y()
    {
        return y;
    }

public:
    int get_data(double a, double b = 0)
    {
        x = a;
        y = b;
    }
    virtual void display_volume() = 0;
};
class Cube : public Volume
{
public:
    Cube()
    {
    }
    void display_volume()
    {
        cout << "volume of cube =" << return_x() * return_x() * return_x() << " m3" << endl;
    }
};
class Sphere : public Volume
{
public:
    Sphere()
    {
    }
    void display_volume()
    {
        cout << "volume of sphere  =" << (4 * 3.14 * return_x() * return_x() * return_x()) / 3 << " m3" << endl;
    }
};

int main()
{
    while (1)
    {

        int choice;
        cout << "1.volume of cube" << endl;
        cout << "2.volume of sphere" << endl;
        cout << "3.exit" << endl;
        cout << "enter your choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            Cube t;
            int side;
            cout << "enter side of cube :";
            cin >> side;
            t.get_data(side);
            t.display_volume();
            break;
        }
        case 2:
        {
            Sphere r;
            int radius;
            cout << "enter radius :";
            cin >> radius;
            r.get_data(radius);
            r.display_volume();
            break;
        }
        case 3:
            exit(0);
            break;
        default:
            cout << "oops!!......wrong choice" << endl;
            break;
        }
        cout << endl;
    }
    return 0;
}