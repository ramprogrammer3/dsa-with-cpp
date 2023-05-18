#include <iostream>
#include <deque>
using namespace std;

void solve(int arr[], int size, int k)
{
    deque<int> q;

    // process first window of size k

    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            q.push_back(i);
        }
    }

    //  remaining window process karna

    for (int i = k; i < size; i++)
    {
        if (q.empty())
        {
            cout << 0 << " ";
        }
        else
        {
            cout << arr[q.front()] << " ";
        }

        while ((!q.empty()) && (i - q.front() >= k))
        {
            q.pop_front();
        }

        if (arr[i] < 0)
        {
            q.push_back(i);
        }
    }

    if (q.empty())
    {
        cout << 0 << " ";
    }
    else
    {
        cout << arr[q.front()] << " ";
    }
}

int main()
{

    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};

    int k = 3;

    solve(arr, 8, k);

    return 0;
}