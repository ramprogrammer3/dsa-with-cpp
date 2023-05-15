#include <iostream>
using namespace std;

class Stack
{

public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data)
    {

        if (top2 - top1 == 1)
        {
            cout << "Overflow " << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }

    void push2(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "over flow " << endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }

    void pop1()
    {
        if (top1 == -1)
        {
            cout << "Under flow in stack 1" << endl;
        }
        else
        {
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2()
    {
        if (top2 == size)
        {
            cout << "underflow in stack 2" << endl;
        }
        else
        {
            arr[top2] = 0;
            top2++;
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s(10);
    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(40);
    s.push1(50);
    s.print();

    s.push2(100);
    s.print(); 
    s.push2(110);
    s.print();
    s.push2(120);
    s.print();
    s.push2(130);
    s.push2(140);
    s.print();

    s.pop1();
    s.pop1();
    s.pop1();
    s.pop1();

    s.print();

    s.pop2();
    s.pop2();
    s.pop2();
    s.print();
    return 0;
}