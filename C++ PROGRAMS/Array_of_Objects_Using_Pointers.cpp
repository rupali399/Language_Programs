#include<iostream>
using namespace std;

class shopItem
{
    int id;
    float price;
    public:
        void setData(int a, float b)
        {
            id = a;
            price = b;
        }
        void getData()
        {
            cout<<"Code of this item is : "<<id<<endl;
            cout<<"Price of this item is : "<<price<<endl;
        }
};

int main()
{
    int size = 3;
    int p, i;
    float q;

    shopItem *ptr = new shopItem[size];
    shopItem *ptrtemp = ptr;

    for(i = 0; i < size; i ++)
    {
        cout<<" Enter Id and Price of item : "<<i + 1<<endl;
        cin>>p>>q;
        ptr -> setData(p, q);
        ptr -> getData();
    } 

    for(i = 0; i < size; i ++)
    {
        cout<<" Item no : "<<i + 1<<endl;
        ptr -> setData(p, q);
        ptr -> getData();
    } 

    return 0;
}