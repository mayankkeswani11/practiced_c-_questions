/*8. Write a C++ Program to implement push and pop methods from stack using
template.*/
// q10 is also same in my program
#include <iostream>
using namespace std;
int stack[10];
int top = -1;
template <class t1>
void push(t1 p)
{
    if (top >= 10)
    {
        cout << "stack is full" << endl;
    }
    else
    {
        stack[++top] = p;
    }
}
template <class t1>
t1 pop()
{
    if (top == -1)
    {
        cout << "stack is empty" << endl;
        exit(0);
    }
    else
    {
        t1 val;
        val = stack[top--];
        return val;
    }
}
int main()
{
    push('a');
    push('b');
    cout << "popped element is :" << pop<char>() << endl;
}
