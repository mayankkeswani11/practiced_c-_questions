#include<iostream>
using namespace std;
class Numbers{
    int x,y,z;
    public:
        Numbers(int x,int y,int z)
        {
            this->x=x;
            this->y=y;
            this->z=z;
        }
        Numbers()
        {

        }
        void input()
        {
            cout<<"enter x =";
            cin>>x;
            cout<<"enter y=";
            cin>>y;
            cout<<"enter z=";
            cin>>z;
        }
        void display()
        {
            cout<<"x="<<x<<endl;
            cout<<"y="<<y<<endl;
            cout<<"z="<<z<<endl;
        }
        Numbers operator-()
        {
            Numbers n;
            n.x=-x;
            n.y=-y;
            n.z=-z;
            return n;
        }
};
int main()
{
    Numbers n1,n2;
    n1.input();
    n2=-n1;
    n1.display();
    n2.display();
    return 0;
}