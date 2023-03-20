/*3. Using the concept of pointers, write a function that swaps the private data values of
two objects of the same class type.*/
#include <iostream>
using namespace std;
class base
{
private:
    int x;

public:
    base()
    {
    }
    base(int a)
    {
        x = a;
    }
    int return_data()
    {
        return x;
    }
    friend void swap(base *, base *);
    void display()
    {
        cout << " x =" << x << endl;
    }
};
void swap(base *b1, base *b2)
{
    int c;
    c = b1->x;
    b1->x = b2->x;
    b2->x = c;
}
int main()
{
    base b1(5);
    base b2(3);
    cout << "before swaping of object data" << endl;
    b1.display();
    b2.display();
    swap(&b1, &b2);
    cout << "after swaping of object data" << endl;
    b1.display();
    b2.display();
    return 0;
}