/*9. Write a C++ program to calculate the area of triangle, rectangle and circle using
constructor overloading. The program should be menu driven.*/
#include <iostream>
using namespace std;

class shape
{
    float area;

public:
    shape()
    {
    }
    shape(int a, int b)
    {
        area = a * b;
    }
    shape(float r)
    {
        area = 3.14 * r * r;
    }
    shape(double a, double b)
    {
        area = 0.5 * a * b;
    }
    float return_area()
    {
        return area;
    }
};
int main()
{
    while (1)
    {
        cout << "1.rectangle" << endl
             << "2.circle" << endl
             << "3.traingle" << endl;
        int a;
        cin >> a;
        switch (a)
        {
        case 1:
        {
            shape s(2, 3);
            cout << "area of rectangle : " << s.return_area() << endl;
            break;
        }
        case 2:
        {
            shape s1(4.6);
            cout << "area of circle :" << s1.return_area() << endl;
            break;
        }
        case 3:
        {
            shape s2(3.5, 6.7);
            cout << "area of triangel is: " << s2.return_area() << endl;
            break;
        }

        default:
            cout << "hello world";
            break;
        }
    }
    return 0;
}
