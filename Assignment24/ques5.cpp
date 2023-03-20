/*5. Define a function to check whether a given number is a term in a Fibonacci series or
not.*/
#include<iostream>
using namespace std;
int fibo(int num){
    int a=1;
    int b=1;
    int c;
    for(int i=2;i<num;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(num==c)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int num;
    cout<<"\nenter the number :";
    cin>>num;
    if(fibo(num)==1)
    {
        cout<<"\nyes it is a fibonacci term ";
    }
    else{
        cout<<"\nit is not a fibonacci term ";
    }
    return 0;
}