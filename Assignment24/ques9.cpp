/*9. Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.*/
#include<iostream>
using namespace std;
float greater_no(int a,int b)
 {
    if(a<b)
    {
        return b;
    }
    else{
        return a;
    }
 }
double greater_no(double a,double b)
 {
    if(a<b)
    {
        return b;
    }
    else{
        return a;
    }
 }
 int main()
 {
    cout<<greater_no(9.7,8.7);
    return 0;
 }