/*
11. Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function*/
#include <iostream>
using namespace std;
class shape
{
    float area;

public:
    shape()
    {
    }
    void setarea(float area)
    {
        this->area = area;
    }
    void display()
    {
        cout << "area =" << area;
    }
};
class circle
{
    shape s;
    int radius;

public:
    circle()
    {
    }
    circle(int rad)
    {
        s.setarea(3.14 * rad * rad);
    }
    shape *operator->()
    {
        return &s;
    }
};
int main()
{
    circle c1(5);
    c1->display();
    return 0;
}