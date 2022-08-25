#include<iostream>
#include<vector>
using namespace std;

void display(vector <int> &v)
{
    for(int i = 0; i < (v.size()); i ++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
}

int main()
{
    // vector <int> vec1;
    // int element, size;

    // cout<<"Enter the size of the vector : "<<endl;
    // cin>>size;

    // cout<<"Enter element to add to this vector : "<<endl;
    // for(int i = 0; i < size; i ++)
    // {
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    // vec1.pop_back();
    // cout<<endl;
    // display(vec1);

    //vector <int> :: iterator iter = vec1.begin();
    // vec1.insert(iter, 30);
    // cout<<endl;
    // display(vec1);

    // vec1.insert(iter + 1, 30);
    // cout<<endl;
    // display(vec1);

    // vec1.insert(iter + 1, 50, 30);
    // cout<<endl;
    // display(vec1);

    // vector <char> vec2(4); //4 element character vector
    // vec2.push_back('6');
    // display(vec2);

    // vector <char> vec3(vec2); //4 element character vector from vec3
    // cout<<endl;
    // display(vec2);

    vector <int> v (6, 13);   //6 element vector of 13 
    display(v);   
    cout<<endl<<v.size();

    return 0;
}