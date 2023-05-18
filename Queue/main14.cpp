#include <iostream>
#include <stack>
using namespace std;

class Queue
{

public:
    stack<int> s1, s2;

    void enqueue(int data)
    {

        if (s1.empty())
        {
            s1.push(data);
            return;
        }

        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(data);

        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int dequeue()
    {
        if (s1.empty())
        {
            return -1;
        }

        int x = s1.top();
        s1.pop();
        return x;
    }

    void print()
    {
        while (!s1.empty())
        {
            cout << s1.top() << " ";
            s1.pop();
        }

        cout << endl;
    }
};

int main()
{

    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();

    q.enqueue(4);
    q.enqueue(5);
    q.print();
}