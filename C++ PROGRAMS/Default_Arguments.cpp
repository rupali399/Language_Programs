#include<iostream>
using namespace std;

int moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
   int money = 1000000;

   cout<<"If you have "<<money<<"Rs. in your bank account, you wil receive "<<moneyReceived(money)<<"Rs. after 1 year"; 
   cout<<"For VIP : "<<"If you have "<<money<<"Rs. in your bank account, you wil receive "<<moneyReceived(money, 1.06)<<"Rs. after 1 year"; 

   return 0;
}