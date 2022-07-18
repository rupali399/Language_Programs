#include<iostream>
using namespace std;

int swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
   int x = 5, y = 4;

   cout<<"The numbers before swappping are : "<<x<<"  "<<y<<endl;

   swapPointer(&x, &y);
   cout<<"The numbers after swappping are : "<<x<<"  "<<y<< endl;

   return 0;
}