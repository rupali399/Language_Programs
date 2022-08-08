#include<iostream>
using namespace std;

class Base1
{
    protected:
        int base1int;
    public:
        void set_base1int(int o)
        {
            base1int = o;
        }
};

class Base2
{
    protected:
        int base2int;
    public:
        void set_base2int(int o)
        {
            base2int = o;
        }
};

class Derived : public Base1, public Base2
{
    public:
        void show()
        {
            cout<<"The value of base1 is : "<<base1int<<endl;
            cout<<"The value of base2 is : "<<base2int<<endl;
            cout<<"The sum of these value is : "<<base1int + base2int<<endl;
        }
};

int main()
{
    Derived Rup;

    Rup.set_base1int(25);
    Rup.set_base2int(78);
    Rup.show();

    return 0;
}