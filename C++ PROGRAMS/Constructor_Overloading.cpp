#include<iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
        Complex()
        {
            a = 0;
            b = 0;
        }
        Complex(int x, int y)
        {
            a = x;
            b = y;
        }
        Complex(int x)
        {
            a = x;
            b = 0;
        }
        void printNumber()
        {
             cout<<"The number is : "<<a<<" + "<<b<<" i"<<endl;
        }
};

int main()
{
    Complex c1;
    c1.printNumber();

    Complex c2(4, 6);
    c2.printNumber();

    Complex c3(7);
    c3.printNumber();

    return 0;
}