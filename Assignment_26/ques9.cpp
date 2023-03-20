/*9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/
#include<iostream>
using namespace std;  
class Bill{
    private:
        int units;
        string name;
        string address;
        int bill_no;
    public:
        void get ()
        {
            cout<<"\nenter bill_no :";
            cin>>bill_no;
            cin.ignore();
            cout<<"\nenter name of customer :";
            getline(cin,name);
            cout<<"\nenter address :";
            getline(cin,address);
            cout<<"\nenter units :";
            cin>>units;
        }
        void show()
        {
            cout<<"\nbill no :"<<bill_no;
            cout<<"\nname of customer :"<<name;
            cout<<"\nAddress of customer :"<<address;
            cout<<"\nno of units :"<<units;
        }
        float Calculate_bill();

};
float Bill::Calculate_bill()
{
    float paise;
    if(units<=100)
    {
        paise=units*1.20;
    }
    else{
        if(units>100 && units<200)
        {
            paise=(100*1.20)+(units-100)*2.00;
        }
        else{
            paise=(100*1.20)+(100)*2.00+(units-200)*3.00;
        }
    }
    return paise;
};
int main(){
        
        Bill b1;
        b1.get();
        b1.show();
        cout<<"\nthe total bill is :"<<b1.Calculate_bill();
}