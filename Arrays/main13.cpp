#include <iostream>
#include <vector>
using namespace std;

void intersectionOfArray(vector<int> &arr1, vector<int> &arr2, vector<int> &ans)
{
    for (int i = 0; i < arr1.size(); i++)
    {
        int element = arr1[i];
        for (int j = 0; j < arr2.size(); j++)
        {
            if (element == arr2[j])
            {
                ans.push_back(element);
                arr2[j] = -1;
            }
        }
    }
}

int main()
{

    vector<int> arr1{1, 2, 3, 4, 6, 8};
    vector<int> arr2{3, 4, 9, 10};
    vector<int> ans;

    intersectionOfArray(arr1, arr2, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
