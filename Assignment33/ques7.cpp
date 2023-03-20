/*7. Create a base class called Matrix. Use this class to store 4 int type values that could
be used to calculate determinants and create matrices. Create class
calculate_determinant which will calculate the determinant of a matrix.
Using these classes, calculate the determinant of the matrix*/
#include <iostream>
using namespace std;
class Matrix
{
private:
    int a, b, c, d;

protected:
    int return_a()
    {
        return a;
    }
    int return_b()
    {
        return b;
    }
    int return_c()
    {
        return c;
    }
    int return_d()
    {
        return d;
    }

public:
    void create_Matrix()
    {
        cout << "Enter four values in matrix :";
        cin >> a >> b >> c >> d;
    }
    void show_Matrix()
    {
        cout << "Matrix is:" << endl;
        cout << "|" << a << "  " << b << "|" << endl
             << "|" << c << "  " << d << "|" << endl;
    }
    virtual void calculate_determinant() = 0;
};
class calculate_Determinant : public Matrix
{
public:
    void calculate_determinant()
    {
        cout << "Determinant =" << ((return_a() * return_d()) - (return_b() * return_c())) << endl;
    }
};
int main()
{
    calculate_Determinant d;
    d.create_Matrix();
    d.show_Matrix();
    d.calculate_determinant();
}
