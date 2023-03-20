/*
11. Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function*/
#include <iostream>
using namespace std;
class Marks
{
private:
    int marks;

public:
    Marks(int marks)
    {
        this->marks = marks;
    }
    Marks()
    {
    }
    Marks *operator->()
    {
        return this;
    }
    void display()
    {
        cout << "marks =" << marks << endl;
    }
};
int main()
{
    Marks m(59);
    m.display();
    m->display();
}
