#include<stdio.h>

void printArray(int *a, int n)
{
    for(int i = 0; i < n - 1; i ++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
}

void SelectionSort(int *a, int n)
{
    printf("Running selection sort \n");
    int indexofmin, temp;
    for(int i = 0; i <  n - 1; i ++)
    { 
        indexofmin = i;
        for(int j = i + 1; j < n ; j ++)
        {
            if(a[j] < a[indexofmin])
            {
                indexofmin = j;
            }
        }
        temp = a[i];
        a[i] = a[indexofmin];
        a[indexofmin] = temp;
    }
}

int main()
{
    int a[] = {3, 6, 4, 78, 45, 99};
    int n = 6;
    printArray(a, n);
    SelectionSort(a, n);
    printArray(a, n);

    return 0;
}