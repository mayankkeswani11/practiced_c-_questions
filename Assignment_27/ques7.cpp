#include<iostream>
using namespace std;
class fraction{
    long numerator;
    long denominator;
    public:
        fraction(long a=0,long b=0)
        {
            numerator=a;
            denominator=b;
        }
        fraction(fraction &f)
        {
            numerator=f.numerator;
            denominator=f.denominator; 
        }
        fraction operator++()
        {
            fraction temp;
            temp.numerator=++numerator;
            temp.denominator=++denominator;
            return temp;
        }
        fraction operator++(int useless)
        {
            fraction temp;
            temp.numerator=numerator++;
            temp.denominator=denominator++;
            return temp;
        }
        void input()
        {
            cout<<"numerator =";
            cin>>numerator;
            cout<<"denominator =";
            cin>>denominator;
        }

        void display()
        {
            cout<<numerator<<"/"<<denominator;
        }
        friend ostream& operator<<(ostream& cout,fraction &n);
        friend istream& operator>>(istream& cin,fraction &n);
};
ostream& operator<<(ostream& cout,fraction &n){
    cout<<n.numerator<<"/"<<n.denominator;
    return cout;

}
istream& operator>>(istream& cin,fraction &n){
            cout<<"numerator =";
            cin>>n.numerator;
            cout<<"denominator =";
            cin>>n.denominator;
            return cin;
    

}
int main()
{
    int choice;
    fraction f1,f2,f3;
    cout<<"f1=";
    cout<<f1;
    cout<<endl;
    cout<<"f2=";
    cout<<f2;
    cout<<endl;
    cout<<"enter 1st fraction value "<<endl;
    cin>>f1;
    f1++;
    cout<<"f1++ =";
    cout<<f1;
    cout<<endl;
    cout<<"++f1 =";
    ++f1;
    cout<<f1<<endl;
    cout<<"enter 2nd fraction value "<<endl;
    cin>>f2;
    f2=++f1;
    cout<<"f1=";
    cout<<f1<<endl;
    cout<<"f2 =";
    cout<<f2<<endl;
    f2=f1++;
     cout<<"f1=";
    cout<<f1<<endl;
    cout<<"f2 =";
    cout<<f2; 
    return 0;

}