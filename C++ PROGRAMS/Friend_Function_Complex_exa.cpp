#include<iostream>
using namespace std;

class c2;

class c1
{
    int c1v1;
    friend void exchange(c1 &, c2 &);

    public:
    void inddata(int a)
    {
        c1v1 = a;
    }
    void display(void)
    {
        cout<<c1v1<<endl;
    }
};

class c2
{
    int c2v2;
    friend void exchange(c1 &, c2 &);

    public:
    void inddata(int a)
    {
        c2v2 = a;
    }
    void display(void)
    {
        cout<<c2v2<<endl;
    }
};

void exchange(c1 & x, c2 & y)
{
    int tmp = x.c1v1;
    x.c1v1 = y.c2v2;
    y.c2v2 = tmp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.inddata(34);
    oc2.inddata(67);
    exchange(oc1, oc2);
    cout<<"The value after exchanging becomes : ";
    oc1.display();
    cout<<"The value after exchanging becomes : ";
    oc2.display();

    return 0;
}