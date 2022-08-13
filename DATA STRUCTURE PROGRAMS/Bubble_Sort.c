#include<stdio.h>

void printArray(int *a, int n)
{
    for(int i = 0; i < n - 1; i ++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
}

void BubbleSort(int *a, int n)
{
    for(int i = 0; i < n - 1; i ++)   //for number of passes
    {
        for(int j = 0; j < n - 1 - i; j ++)  //for comparison in each pass
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void AdaptiveBubbleSort(int *a, int n)
{
    int isSorted = 0;
    for(int i = 0; i < n - 1; i ++)   //for number of passes
    {
        isSorted = 1;
        for(int j = 0; j < n - 1 - i; j ++)  //for comparison in each pass
        {
            printf("Working on pass number %d\n", (i + 1));
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted)
        {
            return;
        }
    }
}

int main()
{
    int a[] = {3, 6, 4, 78, 45, 99};
    //int a[] = {1, 4, 6, 8, 9, 11};
    int n = 6;
    printArray(a, n);
    BubbleSort(a, n);
    printArray(a, n);

    return 0;
}