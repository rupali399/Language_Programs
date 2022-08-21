#include<iostream>
using namespace std;

class Complex
{
    int real, imaginary;
    public:
        void setData(int a, int b)
        {
            real = a;
            imaginary = b;
        }
        void getData()
        {
            cout<<"The real part is : "<<real<<endl;
            cout<<"The imaginary part is : "<<imaginary<<endl;
        }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    // (*ptr).setData(1, 54);
    // (*ptr).getData();

    Complex *ptr = new Complex;
    ptr -> setData(1, 54);
    ptr -> getData();

    //Array of objects

    Complex *ptr1 = new Complex[4];
    ptr1 -> setData(1, 54);
    ptr1 -> getData();

    return 0;
}