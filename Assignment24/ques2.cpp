//2. Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int Highest_digit(int a)
{
    int k=a%10;
    for(int i=0;a!=0;i++)
    {
        int q;
        a=a/10;
        q=a%10;
        if(k<q)
        {
            k=a%10;
        }
    }
    return k;
}
int main()
{
    int a;
    cout<<"\nenter number :";
    cin>>a;
    cout<<"\nthe highest digit of a number is :"<<Highest_digit(a);
    return 0;
}
