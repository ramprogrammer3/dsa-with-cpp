#include <iostream>
using namespace std;

int peakIndex(int *arr, int n)
{
    int s = 0;
    int e = n - 1;

    int m = (s + e) / 2;

    while (s < e)
    {
        if (arr[m] < arr[m + 1])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }

        m = (s + e) / 2;
    }

    return s;
}

int main()
{

    int arr[] = {20,25,30,35,40,5,4,3,1};
    int n = 9;

    int index = peakIndex(arr, n);
    cout << "The index is " << index << endl;

    cout << "The element is " << arr[index] << endl;

    return 0;
}