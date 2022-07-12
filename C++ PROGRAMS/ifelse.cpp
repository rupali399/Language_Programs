#include<iostream>
using namespace std;

int main()
{
    int age;
    
    cout<<"Tell me your age"<<endl;
    cin>>age;

    if(age<18)
    {
    cout<<"You can not come to my party"<<endl;
    }

    else if(age==18)
    {
    cout<<"You are a kid"<<endl;
    }

    else 
    {
    cout<<"You can come to my party"<<endl;
    }
}