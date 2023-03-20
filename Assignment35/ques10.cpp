/*10. Write a C++ program to implement Hash Table using Template Class*/
#include <iostream>
using namespace std;

class stack
{
    int stk[10];
    int top = -1;

public:
    template <class t1>
    t1 push(t1 p)
    {
        if (top >= 10)
        {
            cout << "stack is full" << endl;
        }
        else
        {
            stk[++top] = p;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
            exit(0);
        }
        else
        {
            top--;
        }
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            if (stk[i] >= 'a' & stk[i] <= 'z' || stk[i] >= 'A' & stk[i] <= 'Z')
            {
                printf("%c", stk[i]);
            }
            else
            {
                cout << stk[i] << " ";
            }
        }
    }
};
int main()
{
    stack s;
    s.push(5);
    s.push(6);
    s.push(9);
    s.push('u');
    s.pop();
    s.display();
}
