#include<iostream>
using namespace std;

int main()
{
   int marks[4] = {23, 45, 56, 89};
   int mathMarks[4]; 

   cout<<marks[0]<<endl; 
   cout<<marks[1]<<endl; 
   cout<<marks[2]<<endl; 
   cout<<marks[3]<<endl;  

   mathMarks[0] = 2278;
   mathMarks[1] = 738;
   mathMarks[2] = 378;
   mathMarks[3] = 578;

   cout<<mathMarks[0]<<endl; 
   cout<<mathMarks[1]<<endl;
   cout<<mathMarks[2]<<endl;
   cout<<mathMarks[3]<<endl;

   //We can also chage the values of an array
   mathMarks[2] = 455; 
   cout<<mathMarks[2]<<endl;

   for(int i=0; i<4; i++)
   {
    cout<<"The values of marks"<<i<<" : is "<<marks[i]<<endl;
   }

   int i = 0;

   while(i<4)
   {
    cout<<"The values of marks"<<i<<" : is "<<marks[i]<<endl;
    i++;
   }

   int j = 0;

   do
   {
    cout<<"The values of marks"<<j<<" : is "<<marks[j]<<endl;
    j++;
   } while (j<4);
    
    return 0;
}