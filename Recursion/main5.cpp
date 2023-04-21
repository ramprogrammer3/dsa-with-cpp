#include <iostream>
using namespace std;

void print(int *arr, int index, int size)
{

    if (index >= size)
    {
        return;
    }

    cout << arr[index] << " ";
    index = index + 1;

    print(arr, index, size);
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};

    int size = 5;
    int index = 0;

    print(arr, index, size);

    return 0;
}