
/*10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).*/
#include<iostream>
using namespace std;
class Matrix{
    int a[3][3];
    public:
    void input();
    void display();
    Matrix operator+(Matrix m)
    {
        Matrix m1;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                m1.a[i][j]=(a[i][j]+m.a[i][j]);
            }
        }
        return m1;
        
    }
};

void Matrix::input()
{
    cout<<"enter numbers :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
}
void Matrix::display()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
}
int main()
{
    Matrix m1,m2,m3;
    m1.input();
    cout<<"\nthe first matrix is :"<<endl;
    m1.display();
    m2.input();
    cout<<"\nthe second matrix is :"<<endl;
    m2.display();
    cout<<"\nthe addition of matrix is :"<<endl;
    m3=m1+m2;
    m3.display();
    return 0;
}