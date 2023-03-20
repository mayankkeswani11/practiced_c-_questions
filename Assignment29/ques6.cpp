/*6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
int ) to Time class.
Example int main()
{
 int duration;
 cout<<”Enter time duration in minutes”;
 cin>>duration;
 Time t1 = duration;
 t1.display();
 return 0;
}*/
#include <iostream>
using namespace std;
class time
{
    int seconds;

public:
    time()
    {
    }
    time(int sec)
    {
        this->seconds = sec * 60;
    }
    void display()
    {
        cout << "Time =" << seconds << " sec";
    }
};
int main()
{
    int duration;
    cout << "Enter time duration in minutes:";
    cin >> duration;
    time t1 = duration;
    t1.display();
    return 0;
}
