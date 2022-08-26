#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    //map is an associative array
    map <string, int> marksMap;
    marksMap ["Rup"] = 98;
    marksMap ["Jack"] = 56;
    marksMap ["Rohan"] = 2;

    //insert method
    marksMap.insert({{"shruti", 189}, {"sana", 178}});

    map <string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter != marksMap.end(); iter ++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    cout<<"The size is : "<<marksMap.size()<<endl;
    cout<<"The max size is : "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is : "<<marksMap.empty()<<endl;

    return 0;
}