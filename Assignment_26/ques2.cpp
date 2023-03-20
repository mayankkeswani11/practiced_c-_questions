/*2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)*/
#include<iostream>
using namespace std;
class Time{
    private:
        int hour,minute,second;
    public:
        void setTime(int a,int b,int c)
        {
            hour=a;
            minute=b;
            second=c;
        }
        void ShowData()
        {
            cout<<"Time : "<<hour<<"::"<<minute<<"::"<<second;
            cout<<endl;
        }
        void normalize()
        {
            hour=0;
            minute=0;
            second=0;
        }
        Time add(Time T)
        {
            Time T1;
            T1.hour=hour+T.hour;
            T1.minute=minute+T.minute;
            T1.second=second+T.second;
            return T1;
        }

};
int main()
{
    Time t,t1,t2;
    t1.setTime(4,30,11);
    t2.setTime(5,20,30);
    t1.ShowData();
    t2.ShowData();
    t=t1.add(t2);
    t.ShowData();
    t.normalize();
    t.ShowData();
}
