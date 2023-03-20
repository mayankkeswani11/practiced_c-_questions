/*Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students*/
#include <iostream>
using namespace std;
class A
{
protected:
    int maths;
    int science;
    int english;

public:
    void setMarks()
    {
        cout << "enter maths marks out of 100 :";
        cin >> maths;
        cout << "\nenter science marks out of 100 :";
        cin >> science;
        cout << "\nenter english marks out of 100 :";
        cin >> english;
    }
    void display_marks()
    {
        cout << "maths =" << maths << endl;
        cout << "science =" << science << endl;
        cout << "english =" << english << endl;
    }
};
class B : public A
{
protected:
    int total_marks;

public:
    void total_mark()
    {
        total_marks = maths + science + english;
    }
};
class C : public B
{
private:
    int percentag;

public:
    void percentage()
    {
        percentag = (total_marks)*100;
        cout << "percentage :" << (percentag) / 300 << "%" << endl;
    }
};
int main()
{
    C obj;
    obj.setMarks();
    obj.display_marks();
    obj.total_mark();
    obj.percentage();
}
