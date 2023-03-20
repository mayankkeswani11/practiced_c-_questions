/*10. Write functions using function overloading to add two numbers having different data types*/
#include<iostream>
using namespace std;
int add(int a,int b)
{
    int c=a+b;
    return c;

}
double add(double a ,double b)
{
    float c=a+b;
    return c;
}
int main()
{
    cout<<"\nthe addition of two number is :"<<add(5,6);
    cout<<"\nthe addition of two number is :"<<add(5.9,6.9);
    return 0;
}