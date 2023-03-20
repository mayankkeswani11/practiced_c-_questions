/*In a bank, different customers have savings account. Some customers may
have taken a loan from the bank. So bank always maintain information about
bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’
customers.*/
#include <iostream>
using namespace std;
class Customer
{
protected:
    string name;
    long long int phone_number;

public:
    Customer()
    {
    }
};
class Depositor : public Customer
{
protected:
    long long int Ac_No;
    int balance;

public:
    Depositor()
    {
    }
};
class Borrower : public Depositor
{
    int loan_no;
    int loan_amount;

public:
    void read()
    {

        cin.get();
        cout << "enter customer name :";
        getline(cin, name);
        cout << "enter customer phone number :";
        cin >> phone_number;
        cout << "enter customer A/C no :";
        cin >> Ac_No;
        cout << "enter balance :";
        cin >> balance;
        cout << "enter loan no :";
        cin >> loan_no;
        cout << "enter loan amount :";
        cin >> loan_amount;
        cout << "________________________" << endl
             << endl;
    }
    void display()
    {
        cout << "Details of customer " << endl
             << endl;
        cout << "_________________________________" << endl;
        cout << "Name of customer :" << name << endl;
        cout << "customer phone number :" << phone_number << endl;
        cout << "customer A/C no :" << Ac_No << endl;
        cout << "Balance :" << balance << endl;
        cout << "________________________________" << endl
             << endl;
        cout << "Loan no :" << loan_no << endl;
        cout << "Loan amount :" << loan_amount
             << endl;
        cout << "________________________________" << endl;
    }
};
int main()
{
    int n;
    cout << "how many customer details you want :";
    cin >> n;
    Borrower b[n];
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        b[i].read();
    }
    for (int i = 0; i < n; i++)
    {
        b[i].display();
    }
    return 0;
}