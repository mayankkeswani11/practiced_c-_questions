/*Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time*/
#include<iostream>
using namespace std;
class Time{
    int hours;
    int minutes;
    int seconds;
    public:
        Time(int h,int m,int s)
        {
            minutes=m;
            seconds=s;
            hours=h;
        }
        Time()
        {
            minutes=0;
            hours=0;
            seconds=0;
        }
        friend istream & operator>>(istream&cin,Time &t);
        friend ostream & operator<<(ostream&cout,const Time &t);
        friend bool operator==(Time t1,Time t2);
};
bool operator==(Time t1,Time t2){
    if(t1.hours==t2.hours&&t1.minutes==t2.minutes&&t1.seconds==t2.seconds)
    {
        return true;
    }
    else{
        return false;
    }
}
istream& operator>>(istream&cin,Time &t)
{
    cout<<"enter hours:";
    cin>>t.hours;
    cout<<"enter minutes:";
    cin>>t.minutes;
    cout<<"enter seconds:";
    cin>>t.seconds;
}
ostream& operator<<(ostream&cout,const Time &t)
{
    cout<<"hours :"<<t.hours<<endl;
    cout<<"minutes :"<<t.minutes<<endl;
    cout<<"seconds :"<<t.seconds<<endl;
    return cout;
}
int main()
{
    Time t1,t2,t;
    cout<<"enter first time"<<endl;
    cin>>t1;
    cout<<"enter second time"<<endl;
    cin>>t2;
    cout<<"first time"<<endl;
    cout<<t1;
    cout<<"second time"<<endl;
    cout<<t2;
    if(t1==t2)
    {
        cout<<"equal time";
    }
    else{
        cout<<"\nnot equal";
    }
    return 0;
}

 
