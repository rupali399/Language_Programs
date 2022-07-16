#include<iostream>
using namespace std;

int main()
{
   for(int i = 0; i < 40; i++)
   {
    cout<<i<<endl;
    if(i==12)
    {
        continue;
    }
    if(i==26)
    {
        break;
    }
   }
   return 0;
}