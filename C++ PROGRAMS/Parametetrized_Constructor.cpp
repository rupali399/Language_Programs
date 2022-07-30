#include<iostream>
using namespace std;

class Complex
{
    int a, b;

    public:

        Complex(int, int);   
        void printNumber()
        {
            cout<<"The number is : "<<a<<" + "<<b<<" i"<<endl;
        }
};

Complex ::Complex(int x , int y)  //This is parameterized constructor as it takes 2 parameters
{
    a = x ;
    b = y ;
}

int main()
{
    //implicit call
    Complex a(4, 6);
    a.printNumber();

    //explicit call
    Complex b = Complex(2, 6);
    b.printNumber();

    return 0;
}