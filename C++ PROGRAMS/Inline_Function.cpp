#include<iostream>
using namespace std;

inline int product(int a, int b)
{
    return a*b;
}

int main()
{
   int a, b;

   cout<<"Enter the 1st number : "<<endl;
   cin>>a;

   cout<<"Enter the 1st number : "<<endl;
   cin>>b;

   cout<<"The product of a and b is : "<<product(a, b)<<endl;

   return 0;
}