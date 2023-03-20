/*10. Define a class StaticCount and create a static variable. Increment this variable in a function and call this 3 times and display the result*/
#include<iostream>
using namespace std;
class StaticCount{
    private:
        static int k;
    public:
        static void setdata()
        {
            k++;
        }
        static int show()//function whic is not object specific is a static function
        {
            return k;
        }
    

};
int StaticCount::k;
int main()
{
    StaticCount::setdata();
    StaticCount::setdata();
    StaticCount::setdata();
    cout<<StaticCount::show();
}