#include <iostream>
#include <vector>
using namespace std;

void printSubArray(vector<int> &arr, int s, int e)
{

    // base case
    if (e == arr.size())
    {
        return;
    }

    // 1 case solution

    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Recursive call

    printSubArray(arr, s, e + 1);
}

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int j = i;
        printSubArray(arr, i, j);
    }
}

int main()
{

    vector<int> arr{1, 2, 3, 4, 5};
    print(arr);

    return 0;
}