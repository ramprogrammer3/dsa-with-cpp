#include <iostream>
using namespace std;

void countZeroOne(int *arr, int size)
{
    int numberOfZero = 0;
    int numberOfOne = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            numberOfZero++;

        if (arr[i] == 1)
        {
            numberOfOne++;
        }
    }

    cout << numberOfOne << endl;
    cout << numberOfZero << endl;
}

int main()
{

    int arr[] = {0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1};

    int size = 13;

    countZeroOne(arr, size);

    return 0;
}