/*10. Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called
square and parallelogram from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_area() to compute and display the area of figures. Make
display_area() as a virtual function and redefine this function in the derived classes to
suit their requirements.
Using these three classes, design a program that will accept dimensions of a
square or a parallelogram interactively, and display the area.*/
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
    int get_data(double a, double b = 0)
    {
        x = a;
        y = b;
    }
    virtual void display_area() = 0;
};
class Parallelogram : public shape
{
public:
    Parallelogram()
    {
    }
    void display_area()
    {
        cout << "area of Parallelogram =" << return_x() * return_y() << endl;
    }
};
class Square : public shape
{
public:
    Square()
    {
    }
    void display_area()
    {
        cout << "area of square  =" << return_x() * return_x() << endl;
    }
};

int main()
{
    while (1)
    {

        int choice;
        cout << "1.Area of Parallelogram" << endl;
        cout << "2.Area of square" << endl;
        cout << "3.exit" << endl;
        cout << "enter your choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            Parallelogram r;
            int base, height;
            cout << "enter base :";
            cin >> base;
            cout << "enter height :";
            cin >> height;
            r.get_data(base, height);
            r.display_area();
            break;
        }
        case 2:
        {
            Square t;
            int side;
            cout << "enter side of Square :";
            cin >> side;
            t.get_data(side);
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
