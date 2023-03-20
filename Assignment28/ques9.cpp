/*
9. Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type.*/
#include<iostream>
using namespace std;
class Integer{
    int x;
    public:
        Integer()
        {
            x=0;
        }
        Integer(int a)
        {
            x=a;
        }
        operator int()
        {
            return x;
        }

};
int main()
{
    int x;
    Integer i1;
    i1=5;
    x=(int)i1;
    cout<<"x = "<<x;
    return 0;
}