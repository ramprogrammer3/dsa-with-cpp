#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int getLength(Node *&head)
{

    int length = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }

    return length;
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *four = new Node(40);
    Node *five = new Node(50);
    Node *six = new Node(60);

    first->next = second;
    second->next = third;
    third->next = four;
    four->next = five;
    five->next = six;

    Node *head = first;
    Node *tail = six;
    cout << "printing linked list " << endl;
    print(head);

    cout << "head of linked list is " << head->data << endl;
    cout << "tail of linked list is " << tail->data << endl;

    cout << "length of linked list is " << getLength(head) << endl;
    return 0;
}