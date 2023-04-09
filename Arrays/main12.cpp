#include <iostream>
#include <vector>
using namespace std;

void unionOfArray(vector<int> &arr1, vector<int> &arr2, vector<int> &U)
{
    for (int i = 0; i < arr1.size(); i++)
    {
        U.push_back(arr1[i]);
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        U.push_back(arr2[i]);
    }
}

void print(vector<int> &U)
{

    for (int i = 0; i < U.size(); i++)
    {

        cout << U[i] << " ";
    }
}

int main()
{

    vector<int> arr1{2, 4, 6, 8};
    vector<int> arr2{1, 3, 5};
    vector<int> U;
    unionOfArray(arr1, arr2, U);

    print(U);

    return 0;
}