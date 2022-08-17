#include<stdio.h>

void printArray(int *a, int n)
{
    for(int i = 0; i < n - 1; i ++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
}

int Partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;

    do
    {
        while(a[j] <= pivot)
        {
            i ++;
        }
        while(a[j] > pivot)
        {
            j --;
        }
        if(i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }while(i < j);
    
    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}

void quickSort(int a[], int low, int high)
{
    int PartitionIndex;  //index of pivot partition

    if(low < high)
    {
    PartitionIndex = Partition(a, low, high);
    quickSort(a, low, PartitionIndex - 1);
    quickSort(a, PartitionIndex + 1, high);
    }
}

int main()
{
    
    int a[] = {3, 6, 4, 78, 45, 99};
    int n = 6;
    printArray(a, n);
    quickSort(a, 0, n - 1);
    printArray(a, n);
    return 0;
}