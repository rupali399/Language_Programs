#include<iostream>
using namespace std;

// template <class T>
// class Rup
// {
//     public:
//         T data;
//         Rup(T a)
//         {
//             data = a;
//         }
//         void display();
// };

// template <class T>
// void Rup <T> :: display()
// {
//     cout<<data<<endl;
// }

template <class T>
void func(T a)
{
    cout<<"I am tamplatized func() "<<a<<endl;
}

void func(int a)
{
    cout<<"I am exact match func() "<<a<<endl;
}

int main()
{
    // Rup <float> r(5.7);
    // cout<<r.data<<endl;
    // r.display();

    // Rup <char> s('n');
    // cout<<s.data<<endl;
    // s.display();

    // Rup <int> d(8);
    // cout<<d.data<<endl;
    // d.display();

    func(4);   //exact match takes the highest priority

    return 0;
}