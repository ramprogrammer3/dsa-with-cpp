#include <iostream>
using namespace std;

int getMax(int *arr, int size)
{

    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{

    int arr[] = {2, 4, 1, 6, 8, 9, 0};
    int size = 7;

    int ans = getMax(arr, size);

    cout << "The maximun element is " << ans << endl;

    return 0;
}