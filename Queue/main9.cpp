#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void print(queue<int> q)
{

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;
}

void reverse(queue<int> &q, int k)
{

    int p = q.size() - k;

    stack<int> s;

    while (k--)
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    while (p)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
        p--;
    }
}

int main()
{

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);
    q.push(5);

    print(q);

    reverse(q, 4);
    print(q);

    return 0;
}