#include <iostream>
using namespace std;

void printDouble(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] * 2 << " ";
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 0, 3};
    int size = 10;

    printDouble(arr, size);

    return 0;
}