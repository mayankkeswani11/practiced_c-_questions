 /*6. Define a class student and write a program to enter student details using constructor
and define member function to display all the details.*/
#include<iostream>
using namespace std;
class Student
{
    private:
        int roll_no;
        string name;
        int id;
    public:
        Student(int a,string nam,int b){
            roll_no=a;
            name=nam;
            id=b;
        }
        void Display()
        {
            cout<<"\nstudent Id :"<<id;
            cout<<"\nstudent roll no :"<<roll_no;
            cout<<"\nstudent name :"<<name;
        }
};
int main()
{
    int roll_no;
    string name;
    int id;
    cout<<"\nenter roll no :";
    cin>>roll_no;
    cout<<"\nenter name :";
    cin.get(); //you can also use cin.ignore();
    getline(cin,name);
    cout<<"\nenter id :";
    cin>>id;
    Student s1(roll_no,name,id);
    s1.Display();
}