#include <iostream>
using namespace std;

bool linearSearch(int *arr, int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
} 

int main()
{

    int arr[] = {2, 9, 6, 7, 4, 12, 15};
    int size = 7;

    if (linearSearch(arr, size, 6))
    {
        cout << "Element is present " << endl;
    }
    else
    {
        cout << "Element is not present " << endl;
    }

    return 0;
}