/*8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.*/
#include<iostream>
using namespace std;
class Bank{
    private:
        float principal;
        float Rate;
        float year;
    public:
    Bank(float a,float b,float c)
    {
        principal=a;
        Rate=b;
        year=c;
    }
    void show()
    {
        cout<<"\nprincipal amount :"<<principal;
        cout<<"\nrate :"<<Rate;
        cout<<"\nrate :"<<year;
    }
    float calculate_SI()
    {
        float SI=(principal*Rate*year)/100;
        return SI;
    }
};
int main()
{
    Bank b1(25000,59,3.5);
    b1.show();
    cout<<"\nsimple interest is :"<<b1.calculate_SI();
}