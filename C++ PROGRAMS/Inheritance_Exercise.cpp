#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator
{
    protected:
        int a, b;

    public:
        void get_dataS()
        {
            cout<<"Enter the value of a : "<<endl;
            cin>>a;
            cout<<"Enter the value of b : "<<endl;
            cin>>b;
        }
        void PerformOperationS(void);
};

void SimpleCalculator :: PerformOperationS(void)
{
    cout<<"The value of a + b  is : "<<a + b<<endl;
    cout<<"The value of a - b is : "<<a - b<<endl;
    cout<<"The value of a * b is : "<<a * b<<endl;
    cout<<"The value of a/b is : "<<a / b<<endl;
}

class ScientificCalculator 
{
   protected:
        int a, b;

    public:
        void get_dataSc()
        {
            cout<<"Enter the value of a : "<<endl;
            cin>>a;
            cout<<"Enter the value of b : "<<endl;
            cin>>b;
        }
        void PerformOperationSc(void);
};

void ScientificCalculator :: PerformOperationSc(void)
{
   
    cout<<"The  value of |a + b| is : "<<abs(a + b)<<endl;
    cout<<"The  value of |a - b| is : "<<abs(a - b)<<endl;
    cout<<"The  value of sin(a) is : "<<sin(a)<<endl;
    cout<<"The  value of cos(a) is : "<<cos(a)<<endl;
    cout<<"The  value of exp(a) is : "<<exp(a)<<endl;
}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    
};

int main() 
{
    HybridCalculator Calc;

    Calc.get_dataS();
    Calc.PerformOperationS();

    Calc.get_dataSc();
    Calc.PerformOperationSc();

    return 0;
}