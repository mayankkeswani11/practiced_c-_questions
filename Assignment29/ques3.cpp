/*3. Create a Product class and convert Product type to Item type using constructor
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
    int result;
    public:
        Product()
        {
            
        }
        int setdata(int a,int b)
        {
            this->a=a;
            this->b=b;
            result=a*b;
            return result;
        }
};
class Item{
    int a;
    public:
    Item()
    {

    }
    Item(Product p)
    {
        a=p.setdata(3,4);
    }
    void display()
    {
        cout<<a;
    }
};
int main()
{
    Product p;
    p.setdata(3,4);
    Item i1;
    i1=p;
    i1.display();
    return 0;
}