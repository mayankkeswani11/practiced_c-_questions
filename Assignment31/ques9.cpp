/*9. Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.*/
#include <iostream>
using namespace std;
class student
{
protected:
    int student_id;
    string student_name;
};
class StudentExam : public student
{
protected:
    int maths, biology, chemistry, geography, history, english;
};
class StudentResult : public StudentExam
{
private:
    float percentage;

public:
    void accept();
    void display();
};
void StudentResult::accept()
{
    cout << "enter student ID :";
    cin >> student_id;
    cin.get();
    cout << "enter student name :";
    getline(cin, student_name);
    cout << "______________________" << endl;
    cout << "Enter marks of 6 Subjects" << endl
         << endl;
    cout << "enter english marks:";
    cin >> english;
    cout << "enter maths marks:";
    cin >> maths;
    cout << "enter chemistry marks:";
    cin >> chemistry;
    cout << "enter biology marks:";
    cin >> biology;
    cout << "enter history marks:";
    cin >> history;
    cout << "enter geography marks:";
    cin >> geography;
    cout << "________________________" << endl
         << endl;
}
void StudentResult::display()
{
    cout << "student ID :" << student_id << endl
         << endl;
    cout << "student name :" << student_name << endl;
    cout << "______________________" << endl;
    cout << " marks of 6 Subjects" << endl
         << endl;
    cout << " english marks:";
    cout << english << endl;
    cout << " maths marks:";
    cout << maths << endl;
    cout << " chemistry marks:";
    cout << chemistry << endl;
    cout << " biology marks:";
    cout << biology << endl;
    cout << " history marks:";
    cout << history << endl;
    cout << "geography marks:";
    cout << geography << endl;
    cout << "________________________" << endl
         << endl;
}
int main()
{
    int n;
    cout << "how many students result you want :";
    cin >> n;
    StudentResult s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].accept();
    }
    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }
}
