#include <iostream>
#include <limits.h>
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector<int> &v, int target)
{

    //
    if (target == 0)
    {
        return 0;
    }

    if (target < 0)
    {
        return INT_MAX;
    }

    int mini = INT_MAX;

    for (int i = 0; i < v.size(); i++)
    {
        int ans = solve(v, target - v[i]);
        if (ans != INT_MAX)
            mini = min(mini, ans + 1);
    }

    return mini;
}

int main()
{

    vector<int> v{1, 2};

    int ans = solve(v, 5);

    cout << "Answer is " << ans << endl;

    return 0;
}