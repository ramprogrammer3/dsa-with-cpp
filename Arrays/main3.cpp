#include <iostream>
#include <vector>
using namespace std;

int main(){


    return 0;
}
#include <iostream>
using namespace std;

void printAllElement(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 0, 3};
    int size = 10;

    printAllElement(arr, size);

    return 0;
}
