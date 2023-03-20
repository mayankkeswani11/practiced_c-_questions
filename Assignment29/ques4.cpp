/*4. Create Product class and convert Product type to Item type using casting operator
int main()
{
 Item i1;
 Product p1;
 p1.setData(3,4);
 i1=p1;
 return 0;
}*/
#include<iostream>
using namespace std;
class Product{
    int a;
    int b;
    public:
        Product()
        {
            a=0;
            b=0;
        }
        void setdata(int d,int c)
        {
            this->a=d;
            this->b=c;
        }
        int getp()
        {
            return a*b;
        }
};
class Item{
    int i;
    public:
        Item()
        {
            i=0;
        }
        Item operator=(Product p)
        {
            i=p.getp();
        }
        void display()
        {
            cout<<"i ="<<i;
        }
};
int main()
{
    Item i1;
    Product p1;
    p1.setdata(3,4);
    i1=p1;
    i1.display();
    return 0;
}
