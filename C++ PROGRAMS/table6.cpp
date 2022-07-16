#include<iostream>
using namespace std;

int main()
{
   int a = 6;
   int i = 1;
   int b;
   while(i<=10)
   {
    b = a*i;
    printf("%d * %d = %d\n",a ,i, b);
    i++;
   }
   return 0;
}