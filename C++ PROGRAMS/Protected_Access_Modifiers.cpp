#include<iostream>
using namespace std;

class Base
{
    protected:
        int a = 10;

    private:
        int b;
};

class Derived : protected Base
{
    public:
        void display()
        {
            cout<<a<<endl;
        }
};

int main()
{
    Derived d;
    d.display();

    return 0;
}