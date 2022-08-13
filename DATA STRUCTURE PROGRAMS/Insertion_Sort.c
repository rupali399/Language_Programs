#include<stdio.h>

void printArray(int *a, int n)
{
    for(int i = 0; i < n - 1; i ++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
}

void InsertionSort(int *a, int n)
{
    int key, j;
    for(int i = 1; i <= n - 1; i ++)   //Loop for each pass
    {
        key = a[i];
        j = i - 1;
        while(a[j] > key && j >= 0)
        {
            a[j + 1] = a[j];
            j --;
        }
        a[j + 1] = key;
    }
}

int main()
{
    int a[] = {3, 6, 4, 78, 45, 99};
    int n = 6;
    printArray(a, n);
    InsertionSort(a, n);
    printArray(a, n);
    return 0;
}