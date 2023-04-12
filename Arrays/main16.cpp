#include <iostream>
#include <vector>
using namespace std;

void moveAllNegative(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        if (arr[end] < 0)
        {
            swap(arr[start], arr[end]);
            start++;
        }
        else
        {
            end--;
        }
    }
}

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    vector<int> v{1, 2, -3, 4, -5, 6};
    moveAllNegative(v);
    print(v);

    return 0;
}
