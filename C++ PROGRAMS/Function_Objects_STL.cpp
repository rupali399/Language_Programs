#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    // Functors

    int arr[] = {1, 78, 4, 2, 54, 77};
    //sort(arr, arr + 6);
    sort(arr, arr + 6, greater <int> ());

    for(int i = 0; i < 6; i ++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}