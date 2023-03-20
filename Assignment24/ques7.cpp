/*7. Write a function using the default argument that is able to add 2 or 3 numbers.*/
#include<iostream>
using namespace std;
int add(int a,int b=0,int c=0)
{
    int add;
    add=a+b+c;
    return add;
}
int main()
{
    cout<<endl<<add(5,6);
    cout<<endl<<add(5,6,7);
    return 0;
}

