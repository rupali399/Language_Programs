#include<iostream>
using namespace std;

class Test
{
    int a;
    int b;
    public:

        //Test(int i, int j) : a(i), b(j + 1)
        //Test(int i, int j) : a(i), b(2 * j)
        //Test(int i, int j) : a(i), b(a + j)

        Test(int i, int j) : a(i), b(j)
        {
            cout<<"Constructor called"<<endl;
            cout<<"value of a is : "<<a<<endl;
            cout<<"value of b is : "<<b<<endl;
        }
};

int main()
{
    Test t(4, 6);

    return 0;
}