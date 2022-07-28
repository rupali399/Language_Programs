#include<iostream>
using namespace std;

class y;

class x
{
    int data;
    friend void add(x, y);

    public:
        setvalue(int value)
        {
           data = value;
        }
};

class y
{
    int num;
    friend void add(x, y);

    public:
        setvalue(int value)
        {
           num = value;
        }
};

void add(x o1, y o2)
{
    cout<<"Summing datas of x and y objects gives me : "<<o1.data + o2.num;
}

int main()
{
    x a1;
    a1.setvalue(3);

    y b1;
    b1.setvalue(5);

    add(a1, b1);

    return 0;
}