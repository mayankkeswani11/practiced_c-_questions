/*2. Extend the above program to display the area of circles. This requires the addition of
a new derived class 'circle' that computes the area of a circle. Remember, for a circle
we need only one value, its radius, but the get_data() function in the base class
requires two values to be passed. (Hint: Make the second argument of get_data()
function as a default one with zero value.)*/
#include <iostream>
using namespace std;
class shape
{
protected:
    double x;
    double y;

public:
    int get_data(double a, double b = 0)
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
        cout << "area of rectangle =" << x * y << endl;
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
        cout << "area of triangle  =" << (0.5) * x * y << endl;
    }
};
class Circle : public shape
{
public:
    Circle()
    {
    }
    void display_area()
    {
        cout << "area of Circle  =" << ((3.14) * x * x) << endl;
    }
};

int main()
{
    while (1)
    {

        int choice;
        cout << "1.Area of Rectangle" << endl;
        cout << "2.Area of Triangle" << endl;
        cout << "3.Area of Circle" << endl;
        cout << "4.exit" << endl;
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
        {
            Circle c;
            int radius;
            cout << "enter radius :";
            cin >> radius;
            c.get_data(radius);
            c.display_area();
            break;
        }
        case 4:
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