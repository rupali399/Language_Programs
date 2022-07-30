#include<iostream>
using namespace std;

class Complex
{
    int a, b;
    
    public:

    //Creating a Constructor

        Complex(void);    //Constructor Declaration
        void printNumber()
        {
            cout<<"The number is : "<<a<<" + "<<b<<" i"<<endl;
        }
};

Complex ::Complex(void)  //This is default constructor as it takes no parameters
{
    a = 10;
    b = 20;
}

int main()
{
    Complex c1, c2, c3;

    c1.printNumber();
    c2.printNumber();  
    c3.printNumber();

    return 0;
}