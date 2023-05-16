#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> q;

    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);

    cout << "size of queue is " << q.size() << endl;
    q.pop();
    cout << "size of queue is " << q.size() << endl;

    if (q.empty())
    {
        cout << "Q is empty " << endl;
    }
    else
    {
        cout << "Queue is not empty " << endl;
    }
    cout << "Front element is " << q.front() << endl;

    cout << "printing queue " << endl;

    q.push(40);

    q.push(70);

    q.push(80);

    q.push(90);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}