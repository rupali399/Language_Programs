#include<iostream>
#include<list>
using namespace std;

void display(list <int> &lst)
{
    list <int> :: iterator itr;
    for(itr = lst.begin(); itr != lst.end(); itr ++)
    {
        cout<<*itr<<endl; 
    }
}

int main()
{
    list <int> list1;   //list of 0 lenght
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);

    //Removing elements from he list

    // list1.pop_back();
    // cout<<endl;
    // display(list1);

    // list1.pop_front();
    // cout<<endl;
    // display(list1);

    // list1.remove(9);
    // cout<<endl;
    // display(list1);

    list <int> list2(3);    //empty list of size 7
    list <int> :: iterator iter;
    iter = list2.begin();

    *iter = 45;
    iter ++;
    *iter = 78;
    iter ++;
    *iter = 43;
    iter ++;
    cout<<endl;
    display(list2);

    //sorting the list
    // list1.sort();
    // cout<<endl;
    // display(list1);

    //Merge the list element
    // cout<<"List after merging : "<<endl;
    // list1.merge(list2);
    // cout<<endl;
    // display(list1);

    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    // cout<<endl;
    // display(list1);

    //Reversing the list
    // list1.reverse();
    // cout<<endl;
    // display(list1);

    //transfer the one list to another list
    list1.splice(iter, list2);
    cout<<endl;
    display(list1);

    return 0;
}