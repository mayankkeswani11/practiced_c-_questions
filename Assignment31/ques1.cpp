/*Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary.
*/
#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    void setName()
    {
        cout << "enter name :";
        getline(cin, name);
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getName()
    {
        cout << "name :" << name << endl;
    }
    int getAge()
    {
        cout << "age :" << age << endl;
    }
};
class Employee : public Person
{
    int empid;
    long int salary;

public:
    void setEmpid(int a)
    {
        empid = a;
    }
    void setsalary(long int a)
    {
        salary = a;
    }
    int getEmpid()
    {
        cout << "Empid :" << empid << endl;
    }
    int getSalary()
    {
        cout << "salary :" << salary << endl;
    }
};
int main()
{
    Employee e;
    e.setName();
    e.setEmpid(314);
    e.setsalary(50000);
    e.setAge(30);
    e.getName();
    e.getEmpid();
    e.getAge();
    e.getSalary();
}