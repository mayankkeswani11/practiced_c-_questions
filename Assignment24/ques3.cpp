/*3. Define a function to calculate x raised to the power y.*/
#include<iostream>
using namespace std;
int pow(int x,int y)
{
    int k=1;
    for(int i=0;i<y;i++)
    {
        k=k*x;
    }
    return k;
}
int main()
{
    int x,y;
    cout<<"\nenter value of x :";
    cin>>x;
    cout<<"\nenter value of y:";
    cin>>y;
    cout<<endl<<x<<" raised to power "<<y<<" :"<<pow(x,y);
    return 0;
}