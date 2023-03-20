/*Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases
'n' items. Display the item-wise bill and total amount using appropriate
format*/
#include <iostream>
using namespace std;
float total_price = 0, total_discount = 0;
class Item
{
protected:
    int item_no;
    string name;
    float price;
};
class Discounted_item : public Item
{
    int discount_percent;
    float discount_price;

public:
    void setdata()
    {
        cout << "enter Item_no :";
        cin >> item_no;
        cin.get();
        cout << "enter name of product :";
        getline(cin, name);
        cout << "enter price :";
        cin >> price;
        cout << "enter discount_percent :";
        cin >> discount_percent;
        cout << endl;
    }
    void display()
    {
        cout << "_________________________________" << endl;
        ;
        cout << "Item_no :" << item_no << endl;
        cout << "Name :" << name << endl;
        cout << "price :" << price << endl;
        cout << "discount_percent :" << discount_percent << endl;
        discount_price = (discount_percent * price) / 100;
        cout << "discounted_price =" << (price - discount_price) << endl
             << endl;
        total_price = total_price + price;
        total_discount = total_discount + discount_price;
    }
};
int main()
{
    int n;
    cout << "how many employee details you want :";
    cin >> n;
    Discounted_item d[n];
    for (int i = 0; i < n; i++)
    {
        d[i].setdata();
    }
    for (int i = 0; i < n; i++)
    {
        d[i].display();
    }
    cout << "total price :" << total_price << endl;
    cout << "total discount :" << total_discount << endl;
    return 0;
}