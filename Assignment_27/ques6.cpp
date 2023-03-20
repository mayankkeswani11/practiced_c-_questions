/*Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 string*/
#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
class Cstring{
    char *str;
    int size;
    public:
        Cstring()
        {
            cout<<"dc called"<<endl;
            str=(char*)malloc(1);
            size=1;
        }
        Cstring(char *s)
        {
            cout<<"pc called"<<endl;
            size=strlen(s);
            str=(char*)malloc(size+1);
            strcpy(str,s);
        }
        Cstring operator=(const Cstring &s)
        {
            if(str==s.str)
            {
                return str;
            }
            cout<<"assignment operator called"<<endl;
            // free(str);
            size=strlen(s.str);
            str=(char*)malloc(size+1);
            strcpy(str,s.str);
        }
        Cstring(const Cstring &s)
        {
            size=strlen(s.str);
            str=(char*)malloc(size+1);
            strcpy(str,s.str);
        }
        Cstring operator+(Cstring &s1){
            cout<<"operator+ called"<<endl;
            Cstring s;
            s.size=strlen(str)+strlen(s1.str);
            s.str=(char*)malloc(s.size+1);
            s.str=strcat(str,s1.str);
            return s;
        }
        void display()
        {
            cout<<str<<endl;
        }
        friend int operator==(Cstring c1,Cstring c2);
};
int operator==(Cstring c1,Cstring c2){
            if(strcmp(c1.str,c2.str)==0){
                return 1;
            }
            else{
                return 0;
            }
        }
int main(){
    Cstring s1("mayank");
    Cstring s2("mayank");
    Cstring s;
    s1.display();
    s2.display();
    if(s1==s2)
    {
        cout<<"equal string"<<endl;
    }
    else{
        cout<<"not equal string"<<endl;
    }
    s=s1+s2;
    s.display();

}