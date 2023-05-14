#include <iostream>
#include <stack>
using namespace std;

int main()
{

    // creation of stack

    stack<int> st;

    // insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // remove

    st.pop();

    // check top element
    cout << "Element on top is : " << st.top() << endl;
    cout << "Size of stack is " << st.size() << endl;

    if (st.empty())
    {
        cout << "Stack is empty " << endl;
    }
    else
    {
        cout << "Stack is not empty " << endl;
    }

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // printing stack

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}