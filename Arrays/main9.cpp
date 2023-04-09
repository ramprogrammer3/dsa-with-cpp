#include <iostream>
using namespace std;

int getMin(int *arr, int size)
{

    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{

    int arr[] = {2, 4, 1, 6, 8, 9, 0};
    int size = 7;

    int ans = getMin(arr, size);

    cout << "The minimum element is " << ans << endl;

    return 0;
}