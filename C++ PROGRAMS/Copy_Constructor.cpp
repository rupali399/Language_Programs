#include<iostream>
using namespace std;

class Number
{
    int a;
    public:

        Number()
        {
            a = 0;
        }

        Number(int num)
        {
            a = num;
        }

        void display()
        {
            cout<<"The number for this object is "<<a<<endl;
        }

        Number(Number & obj)
        {
            cout<<"Copy Constructor called"<<endl;
        }
};

int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();
    Number z1(x);   //Copy Constructor invoked
    z1.display();

    return 0;
}