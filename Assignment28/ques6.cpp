/*6. Create a complex class and overload assignment operator for that class.
*/
#include<iostream>
using namespace std;
class complex {
    int real;
    int img;
    public:
        complex()
        {
            real=0;
            img=0;
        }
        complex(int a,int b)
        {
            this->real=a;
            this->img=b;
        }
        complex operator=(complex c)
        {
            real=c.real;
            img=c.img;
        }
        void display(){
            cout<<"real ="<<real;
            cout<<" img ="<<img<<endl;
        }
};
int main()
{
    complex c1;
    complex c2(3,5);
    c1.display();
    c2.display();
    c1=c2;
    c2.display();
}