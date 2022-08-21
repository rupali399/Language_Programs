#include<iostream>
using namespace std;

int main()
{
    //Basic Pointer
    // int a = 4;
    // int *ptr = &a;
    // cout<<"The value of a is : "<<*(ptr)<<endl;

    //new operator :-

    int *p = new int (40);
    cout<<"The value at p is : "<<*(p)<<endl;

    int *arr = new int [3];
    arr[0] = 10;
    arr[1] = 20;  //or *(a + 1) = 20;
    arr[2] = 30;

    cout<<"The value at arr[0] is : "<<arr[0]<<endl;
    cout<<"The value at arr[1] is : "<<arr[1]<<endl;
    cout<<"The value at arr[2] is : "<<arr[2]<<endl;

    //delete operator :-

    // int *arr = new int [3];
    // arr[0] = 10;
    // arr[1] = 20;  
    // arr[2] = 30;
    // delete [] arr;

    return 0;
}