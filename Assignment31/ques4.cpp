/*Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation , department name , basic-salary) from
Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary*/
#include <iostream>
using namespace std;
class person
{
protected:
    string address;
    string name;
    long long int phone_no;
};
class Employee : public person
{
protected:
    int eno;
    string ename;
};
class Manager : public Employee
{
private:
    string designation;
    string department_name;
    int basic_salary;

public:
    void setData()
    {
        /* code */
        cout << "Enter details of Manager" << endl
             << "............................" << endl;
        cout << "enter employee no :";
        cin >> eno;
        cout << endl;
        cin.get();
        cout << "enter name :";
        getline(cin, name);
        cout << endl;
        cout << "enter phone number :";
        cin >> phone_no;
        cout << endl;
        cin.get();
        cout << "enter address  :";
        getline(cin, address);
        cout << endl;
        cout << "enter designation :";
        getline(cin, designation);
        cout << endl;
        cout << "department name :";
        getline(cin, department_name);
        cout << endl;
        cout << "enter basic salary : ";
        cin >> basic_salary;
        cout << endl;
    }
    int return_salary()
    {
        return basic_salary;
    }
};
int main()
{
    int n;
    cout << "how many employee details you want :";
    cin >> n;
    Manager m[n];
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        m[i].setData();
    };
    for (int i = 0; i < n; i++)
    {
        m[i].return_salary();
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    cout << "highest salary :" << arr[0];
    return 0;
}
