/*8. Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle*/
#include<iostream>
using namespace std;
float area(float r)
{
    const float pi=3.14;
    float area=pi*r*r;
    return area;
}
int area(int a,int b)
{
    int area=a*b;
    return area;
}
float area(float a,float b)
{
    float area=0.5*a*b;
    return area;
}
int main()
{
    cout<<"\n1.area of circle\n2.area of rectangle\n3.area of triangle";
    int choice;
    cout<<"\nenter your choice :";
    cin>>choice;
    switch (choice)
    {
    case 1:
        float r;
        cout<<"\nenter radius of circle :";
        cin>>r;
        cout<<"\narea of circle:"<<area(r);
        break;
    case 2:
        int a,b;
        cout<<"\nenter length and breadth :";
        cin>>a>>b;
        cout<<"\n2.area of rectangle :"<<area(a,b);
        break;
    case 3:
        float c,d;
        cout<<"\nenter base and height :";
        cin>>c>>d;
        cout<<"\narea of triangle :"<<area(c,d);
        break;
    default:
        cout<<"\nwrong choice........ ";
        break;
    }
    return 0;
}