
/*1.Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called
triangle and rectangle from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_area() to compute and display the area of figures. Make
display_area() as a virtual function and redefine this function in the derived classes to
suit their requirements.
Using these three classes, design a program that will accept dimensions of a
triangle or a rectangle interactively, and display the area.
Remember the two values given as input will be treated as lengths of two sides in
the case of rectangles, and as base and height in the case of the triangles, and used
as follows:
Area of rectangle = x * y Area of triangle = 1/2 * x * y*/
#include <iostream>
using namespace std;
class shape
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
    int get_data(double a, double b)
    {
        x = a;
        y = b;
    }
    virtual void display_area() = 0;
};
class Rectangle : public shape
{
public:
    Rectangle()
    {
    }
    void display_area()
    {
        cout << "area of rectangle =" << return_x() * return_y() << endl;
    }
};
class Triangle : public shape
{
public:
    Triangle()
    {
    }
    void display_area()
    {
        cout << "area of triangle  =" << (0.5) * return_x() * return_y() << endl;
    }
};

int main()
{
    while (1)
    {

        int choice;
        cout << "1.Area of Rectangle" << endl;
        cout << "2.Area of Triangle" << endl;
        cout << "3.exit" << endl;
        cout << "enter your choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int length, breadth;
            Rectangle r;
            cout << "enter length :";
            cin >> length;
            cout << "enter breadth :";
            cin >> breadth;
            r.get_data(length, breadth);
            r.display_area();
            break;
        }
        case 2:
        {
            Triangle t;
            int base, height;
            cout << "enter base :";
            cin >> base;
            cout << "enter height :";
            cin >> height;
            t.get_data(base, height);
            t.display_area();
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
