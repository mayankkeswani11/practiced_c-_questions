 /*1.Define a function to check whether a given number is a Prime number or not.
10. Write functions using function overloading to add two numbers having different data
types*/
#include<iostream>
using namespace std;
int Prime(int a)
{
    int k=1;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
        else{
            k=1;
        }
    }
    return k;
}
int main()
{
    int a;
    cout<<"\nenter number :";
    cin>>a;
    if(Prime(a)!=0)
    {
        cout<<"\nprime number";
    }
    else{
        cout<<"\n not prime";
    }
    return 0;
}