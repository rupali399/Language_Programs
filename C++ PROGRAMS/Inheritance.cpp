#include<iostream>
using namespace std;

//Base class

class Employee
{
    public:
        int id;
        float salary;

        Employee(int inpid)
        {
            id = inpid;
            salary = 350.0;
        }

        Employee(){}
};

//Derived class

class Programmer : public Employee
{
    public:
        int languagecode;

        Programmer(int inpid)
        {
            id = inpid;
            languagecode = 9;
        }

        void getdata()
        {
            cout<<id<<endl;
        }
};

int main()
{
    Employee Rup(1), Shruti(2);

    cout<<Rup.salary<<endl;
    cout<<Shruti.salary<<endl;

    Programmer skillf(10);

    cout<<skillf.languagecode<<endl;
    cout<<skillf.id<<endl;
    skillf.getdata();

    return 0;
}