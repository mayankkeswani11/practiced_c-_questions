/*Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions.
*/
#include <iostream>
using namespace std;
class worker
{
protected:
    int code;
    string name;
    float salary;
};
class officer
{
protected:
    float DA, HRA;
};
class manager : public officer, public worker
{
    float TA;
    float gross_salary;

public:
    void set_DATA()
    {
        cout << "............................." << endl
             << endl;
        cout << "Enter code :";
        cin >> code;
        cout << "Enter name :";
        cin >> name;
        fflush(stdin);
        cout << "enter salary :";
        cin >> salary;
        cout << "enter DA :";
        cin >> DA;
        cout << "enter HRA :";
        cin >> HRA;
        TA = (10 * salary) / 100.0f;
        gross_salary = TA + HRA + DA + salary;
    }
    void PUT_DATA()
    {
        cout << endl;
        cout << "........................." << endl;
        cout << "Manager information" << endl;
        cout << "........................." << endl;
        cout << "code :" << code << endl;
        ;
        cout << "name :" << name << endl;
        cout << "salary :" << salary << endl;
        cout << "DA :" << DA << endl;
        cout << "HRA :" << HRA << endl;
        cout << "TA :" << TA << endl;
        cout << "gross_salary :" << gross_salary << endl;
    }
};
int main()
{
    int n;
    cout << "enter manager count :";
    cin >> n;
    manager m[n];
    cout << "enter worker information for " << n << endl;
    for (int i = 0; i < n; i++)
    {
        m[i].set_DATA();
    }
    for (int i = 0; i < n; i++)
    {
        m[i].PUT_DATA();
    }
    return 0;
}