#include<iostream>
using namespace std;

int sum(int a, int b)
{
    cout<<"using function wiith 2 arguments"<<endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout<<"using function wiith 3 arguments"<<endl;
    return a + b + c;
}

//calculate the volume of a cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

//calculate the volume of a cube
int volume(int a)
{
    return (a * a * a);
}

//Rectangular Box
int volume(int l, int b, int h)
{
    return (l * b * h);
}


int main()
{
   cout<<"The sum of 3 and 6 : "<<sum(3, 6)<<endl;
   cout<<"The sum of 3, 6 and 7 : "<<sum(3, 6, 7)<<endl<<endl;

   cout<<"The volume of cuboid : "<<volume(3, 6, 7)<<endl;
   cout<<"The volume of cylinder : "<<volume(3, 6)<<endl;
   cout<<"The volume of cube : "<<volume(3)<<endl;
   return 0;
}