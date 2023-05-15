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

void solve(stack<int> &s)
{

    if (s.empty())
    {
        cout << "stack is empty , can't insert at bottom " << endl;
        return;
    }

    int target = s.top();

    s.pop();

    insertAtBottom(s, target);
}

int main()
{

    stack<int> s;
    s.push(5);
    s.push(15);
    s.push(27);
    s.push(32);
    s.push(11);

    cout << s.size() << endl;
    solve(s);
    cout << s.size() << endl;

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    return 0;
}