/*Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.*/
#include<iostream>
using namespace std;
class Matrix{
    int a[3][3];
    public:
        Matrix()
        {

        }
        void input(){
            cout<<"\nenter numbers in matrix : "<<endl;
            for(int i=0;i<3;i++)
            {
                for (int j = 0; j<3; j++)
                {
                    cin>>a[i][j];
                }
            }
        }
        void display()
        {
            cout<<"the matrix is :"<<endl;
            for(int i=0;i<3;i++)
            {
                for (int j = 0; j<3; j++)
                {
                    cout<<a[i][j]<<"  ";
                }
                cout<<endl;
            }    
        }
        Matrix operator-()
        {
            Matrix m;
            for(int i=0;i<3;i++)
            {
                for (int j = 0; j<3; j++)
                {
                    m.a[i][j]=-a[i][j];
                }
            }
            return m;  
        }
};
int main()
{
    Matrix m,m1;
    m.input();
    m1=-m;
    m1.display();
    m.display();
    return 0;
}
