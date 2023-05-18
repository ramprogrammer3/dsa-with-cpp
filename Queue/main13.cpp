#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> solve(vector<int> arr, int n, int k)
{
    // your code here
    deque<int> q;
    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        while (!q.empty() && arr[i] >= arr[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }

    ans.push_back(arr[q.front()]);

    for (int i = k; i < n; i++)
    {

        if (!q.empty() && i - q.front() >= k)
        {
            q.pop_front();
        }

        while (!q.empty() && arr[i] >= arr[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);

        ans.push_back(arr[q.front()]);
    }

    return ans;
}

void print(vector<int> v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> arr{1, 3, -1, -3, 3, 5, 6, 7};
    int n = arr.size();
    int k = 3;

    print(arr);

    vector<int> ans = solve(arr, n, k);

    print(ans);

    return 0;
}