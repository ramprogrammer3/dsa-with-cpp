#include <iostream>
using namespace std;

void print(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void initializeWithOne(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        arr[i] = 1;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 0, 3};
    int size = 10;

    print(arr, size);
    cout << endl;
    cout << endl;
    initializeWithOne(arr, size);

    print(arr, size);

    return 0;
}