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

void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (tail == NULL)
    {
        tail = newNode;
        head = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);

    newNode->next = head;

    if (head == NULL)
    {
        tail = newNode;
    }
    head = newNode;
}

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

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{

    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // find position
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }

    // step 1:
    int i = 1;
    Node *prev = head;

    while (i < position)
    {
        prev = prev->next;
        i++;
    }

    if (prev->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }

    Node *curr = prev->next;

    Node *newNode = new Node(data);

    newNode->next = curr;

    prev->next = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtPosition(head, tail, 10, 1);
    insertAtPosition(head, tail, 20, 1);
    insertAtPosition(head, tail, 30, 2);

    cout << "printing linked list " << endl;
    print(head);

    return 0;
}