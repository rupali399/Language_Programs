#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Rup
{
    public:
        T1 a;
        T2 b;
        T3 c;
        Rup(T1 x, T2 y, T3 z)
        {
            a = x;
            b = y;
            c = z;
        }
        void display()
        {
            cout<<"The value of a is : "<<a<<endl;
            cout<<"The value of b is : "<<b<<endl;
            cout<<"The value of c is : "<<c<<endl;
        }
};

int main()
{
    Rup <> r(4, 4.4, 'k');
    r.display();

    cout<<endl;
    Rup <float, char, char> g(8.9, 'c', 'd');
    g.display();
    
    return 0;
}