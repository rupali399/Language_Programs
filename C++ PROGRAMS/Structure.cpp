#include<iostream>
using namespace std;

struct employee
{
    int eID;
    char favChar;
    float salary;
};

typedef struct chocolate
{
    int Howmany;    
    float price;
}ch;

int main()
{
    struct employee Rup;
    Rup.eID = 1;
    Rup.salary = 1200000;
    Rup.favChar = 'G';

    ch fivestar;
    fivestar.Howmany = 5;
    fivestar.price = 200;

    cout<<"The value is : "<<Rup.eID<<endl;
    cout<<"The value is : "<<Rup.salary<<endl;
    cout<<"The value is : "<<Rup.favChar<<endl;

    cout<<"The value is : "<<fivestar.Howmany<<endl;
    cout<<"The value is : "<<fivestar.price<<endl;
    
    return 0;
}