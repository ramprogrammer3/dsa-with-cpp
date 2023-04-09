#include <iostream>
using namespace std;

void reverseArray(int *arr, int size)
{

    int e = size - 1;
    int s = 0;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void print(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    print(arr, size);

    reverseArray(arr, size);

    cout << endl;

    print(arr, size);

    return 0;
}