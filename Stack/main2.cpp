#include <iostream>
using namespace std;

class Stack
{

public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // functions
    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Stack over flow " << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow, can't delete element " << endl;
        }
        else
        {
            top--;
        }
    }

    int getTop()
    {
        if (top == -1)
        {
            cout << "There is no element in stack " << endl;
            return 0;
        }
        else
        {
            return arr[top];
        }
    }

    int getSize()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Stack s(10);
    // insertion;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Top element of stack is " << s.getTop() << endl;

    cout << "Size of stack is " << s.getSize() << endl;

    cout << "Stack is empty or not " << s.isEmpty() << endl;

    while (!s.isEmpty())
    {
        cout << s.getTop() << " ";
        s.pop();
    }
    cout << endl;

    cout << "Stack is empty or not " << s.isEmpty() << endl;
    cout << "Size of stack is " << s.getSize() << endl;
    s.pop();

    return 0;
}