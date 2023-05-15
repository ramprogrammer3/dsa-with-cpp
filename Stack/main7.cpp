#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int target)
{

    if (s.size() == 0)
    {
        s.push(target);
        return;
    }

    int temp = s.top();
    s.pop();

    insertAtBottom(s, target);

    s.push(temp);
}

void reverseStack(stack<int> &s)
{

    if (s.size() == 0)
    {
        return;
    }

    int target = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottom(s, target);
}

int main()
{

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}