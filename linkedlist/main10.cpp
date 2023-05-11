#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

    Node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
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
}
void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
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

void insertAtTail(Node *&tail, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    int length = getLength(head);
    if (position > length + 1)
    {
        cout << "Enter valid position " << endl;
        return;
    }

    if (position > length)
    {
        insertAtTail(tail, data);
        return;
    }

    int i = 1;
    Node *prevNode = head;
    while (i < position - 1)
    {
        prevNode = prevNode->next;
        i++;
    }

    Node *curr = prevNode->next;

    Node *newNode = new Node(data);
    prevNode->next = newNode;
    newNode->prev = prevNode;
    newNode->next = curr;
    curr->prev = newNode;
}

int main()
{

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    Node *head = first;
    Node *tail = third;

    cout << "printing linked list " << endl;
    insertAtPosition(head, tail, 222, 4);
    print(head);
    return 0;
}