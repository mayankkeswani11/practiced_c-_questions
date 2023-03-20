/*2. Define a class Rectangle and overload area function for different types of data type.*/
#include <iostream>
using namespace std;
class Rectangle
{
    float areas;

public:
    Rectangle()
    {
        areas = 0;
    }
    int area(int a, int b)
    {
        areas = a * b;
    }
    float area(double a, double c)
    {
        areas = a * c;
    }
    void display()
    {
        cout << "area= " << areas << endl;
    }
};
int main()
{
    Rectangle r, r1;
    r.area(4, 5);
    r.display();
    r1.area(5.6, 6.6);
    r1.display();
    return 0;
}