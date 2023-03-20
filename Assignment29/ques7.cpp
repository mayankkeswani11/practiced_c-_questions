/*7. Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
 Time t1(2,30);
 t1.display();
 Minute m1;
 m1.display();
 m1=t1 // Fetch minute from time
 t1.display();
 m1.display();
 return 0;
}*/
#include <iostream>
using namespace std;
class Time
{
    int minutes;

public:
    Time()
    {
    }
    Time(int a, int b)
    {
        minutes = b;
    }
    void set_minute(int a)
    {
        minutes = a;
    }
    int get_minutes()
    {
        return minutes;
    }

    void display()
    {
        cout << "time =" << minutes << endl;
    }
};
class minutes
{
    int min;

public:
    minutes()
    {
        min = 0;
    }
    minutes operator=(Time t)
    {
        min = t.get_minutes();
    }
    operator int()
    {
        return min;
    }
    void display()
    {
        cout << "minutes =" << min << endl;
    }
};
int main()
{
    Time t1(2, 30);
    t1.display();
    minutes m1;
    m1.display();
    m1 = t1; // Fetch minute from time
    t1.display();
    m1.display();
    return 0;
}
