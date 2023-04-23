#include <iostream>
using namespace std;

void rotateArr(int arr[], int d, int n)
{

    int ans[1000000];

    for (int i = 0; i < n; i++)
    {
        ans[i] = arr[(d + i) % n];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
}

void PrintTheArray(int *arr, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int N = 7;
    int d = 2;

    rotateArr(arr, d, N);
    PrintTheArray(arr, N);
    return 0;
}