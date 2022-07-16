#include<stdio.h>

int binarySearch(int arr[], int size, int element)
{
    int low, high, mid;
    low = 0;
    high = size-1;
    mid = (low+high)/2;
    while(low <= high)
    {
       if(arr[mid] == element)
       {
           return mid;
       }
       if(arr[mid] < element)
       {
           low = mid + 1;
       }
       else
       {
           high = mid - 1; 
       }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 16, 64, 73, 123, 644};
    int size = sizeof(arr)/sizeof(int);
    int element = 64;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d\n", element, searchIndex);
    return 0;
}
