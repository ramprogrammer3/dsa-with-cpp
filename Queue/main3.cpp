#include <iostream>
using namespace std;

class CQueue
{

public:
    int *arr;
    int size;
    int front;
    int rear;

    CQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
    {

        // full
        if (front == 0 && rear == size - 1)
        {
            cout << "Q is full , can't insert " << endl;
        }

        // single element

        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }

        // circular nature

        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }

        // normal case

        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {

        // check empty

        if (front == -1)
        {
            cout << "Q is empty ,can't pop " << endl;
        }

        // single element wala case

        else if (front == rear)
        {
            arr[front] = -1;

            front = -1;
            rear = -1;
        }

        // circular nature maintain
        else if (front == size - 1)
        {
            front = 0;
        }
        // normal flow
        else
        {
            front++;
        }
    }
};

int main()
{

    return 0;
}