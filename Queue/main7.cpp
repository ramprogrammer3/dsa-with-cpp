#include <iostream>
#include <queue>
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

void reverse(queue<int> &q)
{
    if (q.empty())
        return;

    int temp = q.front();

    q.pop();

    reverse(q);

    q.push(temp);
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
    reverse(q);
    print(q);

    return 0;
}
