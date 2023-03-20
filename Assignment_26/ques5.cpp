/*5. Define a class Date and write a program to Display Dateand initialise date object
using Constructors.*/

#include<iostream>
using namespace std;
class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(int a,int b,int c)
        {
            day=a;
            month=b;
            year=c;
        }
        void Display()
        {
            cout<<"\nDate : "<<day<<"-"<<month<<"-"<<year;
        }
};
int main()
{
    Date d1(11,01,2004);
    d1.Display();
}
