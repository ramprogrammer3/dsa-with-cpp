#include <iostream>
#include <vector>
using namespace std;

void unionOfArray(vector<int> &arr1, vector<int> arr2, vector<int> &ans)
{
    for (int i = 0; i < arr1.size(); i++)
    {
        ans.push_back(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        ans.push_back(arr2[i]);
    }
}

void print(vector<int> &ans)
{

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{

    vector<int> arr1{2, 4, 6, 8};
    vector<int> arr2{1, 3, 7};

    vector<int> ans;

    unionOfArray(arr1, arr2, ans);
    print(ans);

    return 0;
}