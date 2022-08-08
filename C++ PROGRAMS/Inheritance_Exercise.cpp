#include<iostream>
#include<cstdlib>
using namespace std;

class SimpleCalculator
{
    protected:
        int a, b;

    public:
        void set_numbers(int c, int d)
        {
            a = c;
            b = d;
        }
        void display(void);
};

void SimpleCalculator :: display(void)
{
    cout<<"The sum of these value is : "<<a + b<<endl;
    cout<<"The subtraction of these value is : "<<a - b<<endl;
    cout<<"The multiplication of these value is : "<<a * b<<endl;
    cout<<"The division of these value is : "<<a / b<<endl;
}

class ScientificCalculator 
{
    protected:
        int i, j;
    
    public:
        void set_num(int k, int r)
        {
            i = k;
            j = r;
        }
        void displaynum(void);
};

void ScientificCalculator :: displaynum(void)
{
   
    cout<<"The  value of |i + j| is : "<<abs(i + j)<<endl;
    cout<<"The  value of |i - j| is : "<<abs(i - j)<<endl;
    cout<<"The  value of 1/x is : "<<1 / i<<endl;
    cout<<"The  value of x ^ 2 is : "<<i * i<<endl;
    cout<<"The  value of  x ^ 3 is : "<<i * i * i<<endl;
}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    public:
        void show(void)
        {
            cout<<"The value of a is : "<<a<<endl;
            cout<<"The value of b is : "<<b<<endl;
            cout<<endl;
            display();

            cout<<endl;
            cout<<"The value of i is : "<<i<<endl;
            cout<<"The value of j is : "<<j<<endl;
            cout<<endl;
            displaynum();
        }
};

int main() 
{
    HybridCalculator R;

    R.set_numbers(3, 4);
    R.set_num(8, 6);
    R.show();

    return 0;
}