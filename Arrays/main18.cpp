#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int element)
{

    int s = 0;
    int e = n - 1;

    int m = (s + e) / 2;

    int ans = -1;

    while (s <= e)
    {

        if (arr[m] == element)
            return m;
        else if (arr[m] < element)
            s = m + 1;
        else
            e = m - 1;

        m = (s + e) / 2;
    }

    return ans;
}

int main()
{
    cout << "Hello ram kumar " << endl;

    int arr[] = {1, 2, 4, 8, 9, 11, 15, 19, 23};

    int n = 9;
    int element = 23;

    int searchElement = binarySearch(arr, n, element);

    cout << "Element found at index " << searchElement << endl;
    cout << "element is " << arr[searchElement] << endl;

    return 0;
}