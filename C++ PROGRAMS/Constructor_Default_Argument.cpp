#include<iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

    public:
        // Simple(int a, int b = 9)
        // {
        //     data1 = a;
        //     data2 = b;
        // }
       
        Simple(int a, int b = 8, int c = 2)
        {
            data1 = a;
            data2 = b;
            data3 = c;
        }

         void printData();
};

void Simple :: printData()
{
    cout<<"The value of data1 is : "<<data1<<" and data2 is : "<<data2<<" and data3 is : "<<data3<<endl;
}

int main()
{
    // Simple s(1);
    // s.printData();

    // Simple s1(1, 5);
    // s1.printData();

    Simple s3(12);
    s3.printData();

    Simple s4(12, 13);
    s4.printData();

    Simple s5(14);
    s5.printData();
    return 0;
}