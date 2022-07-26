#include<iostream>
using namespace std;

class Employee
{
    static int count;
    int id;
    public:
      void setData(void)
      {
        cout<<"Enter the id"<<endl;
        cin>>id;
      }
      void getData(void)
      {
        cout<<"The id of this employee is "<<id<<"and this is employee no."<<count<<endl;
        count ++;
      }
};

int Employee :: count = 100;

int main()
{
   Employee Rup, Shruti, Sana;

   //count is static data member of class employee

   Rup.setData();
   Rup.getData();

   Shruti.setData();
   Shruti.getData();

   Sana.setData();
   Sana.getData();
   return 0;
}