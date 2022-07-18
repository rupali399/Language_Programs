#include<iostream>
using namespace std;

int subtraction(int a, int b); 

int main()
{
   int num1, num2;
   cout<<"Enter first number : "<<endl;
   cin>>num1;

   cout<<"Enter second number : "<<endl;
   cin>>num2;

   cout<<"The subtraction is : "<<subtraction(num1, num2);
   return 0;
}

int subtraction(int a, int b)
{
    int c = a - b;
    return c;
}