#include<iostream>
using namespace std;

// float funcaverage(int a, int b)
// {
//     float average = (a + b)/2.0;
//     return average;
// }

// float funcaverage2(int a, float b)
// {
//     float average = (a + b)/2.0;
//     return average;
// }

template <class T1, class T2>

float funcaverage(T1 a, T2 b)
{
    float average = (a + b)/2.0;
    return average;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    // float a;
    // a = funcaverage(5, 2);
    // printf("The average of this number is %.3f\n", a);

    // float b;
    // b = funcaverage2(5, 3.45);
    // printf("The average of this number is %.3f", b);

    float a;
    a = funcaverage <float> (4.67, 6.89);
    printf("The average of this number is %.4f\n", a);

    int x = 4, y = 5;
    swapp(x, y);
    cout<<x<<endl<<y;

    return 0;
}