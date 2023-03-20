/*6. Define a function to swap data of two int variables using call by reference*/
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    int a,b;
    cout<<"\nenter two numbers :";
    cin>>a>>b;
    cout<<"\nnumbers before swap ";
    cout<<"\na = "<<a;
    cout<<"\nb = "<<b;
    swap(a,b);
    cout<<"\nnumber after swap";
    cout<<"\na = "<<a;
    cout<<"\nb = "<<b;
    return 0;
}