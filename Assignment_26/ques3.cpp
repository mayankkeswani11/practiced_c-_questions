/*3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.*/
#include<iostream>
using namespace std;
class Cube{
    private:
        float length;
        float height;
        float breadth;
    public:
        Cube()
        {
            length=0;
            breadth=0;
            height=0;
        }
        Cube(float a,float b,float c)
        {
            length=a;
            breadth=b;
            height=c;
        }
        float volume()
        {
            float vol;
            vol=length*breadth*height;
            return vol;
        }

};
int main()
{
    float volume;
    Cube c,c1(2.5,3.6,5.7);
    volume=c1.volume();
    cout<<"\nthe volume is :"<<volume;
}
    