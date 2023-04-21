#include <iostream>
#include <limits.h>
using namespace std;

void findMin(int *arr, int n, int i, int &mini)
{

    if (i >= n)
        return;

    if (arr[i] < mini)
    {
        mini = arr[i];
    }

    findMin(arr, n, i + 1, mini);
}

int main()
{

    int arr[] = {10, 30, 21, 44, 32, 17, 19, 66};
    int n = 8;

    int mini = INT_MAX;

    int i = 0;

    findMin(arr, n, i, mini);

    cout << "minimum number is " << mini << endl;

    return 0;
}