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
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;

        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "linkedlist deleted with value " << value << endl;
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

void deleteNode(Node *&head, Node *&tail, int position)
{

    if (head == NULL)
    {
        cout << "linkedlist is empty " << endl;
        return;
    }

    if (head->next == NULL)
    {
        Node *temp = head;
        head = NULL;
        delete temp;
        return;
    }

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }

    int length = getLength(head);
    if (position == length)
    {
        Node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }

    int i = 1;
    Node *left = head;
    while (i < position - 1)
    {
        left = left->next;
        i++;
    }

    Node *curr = left->next;
    Node *right = curr->next;

    left->next = right;
    right->prev = left;
    curr->prev = NULL;
    curr->next = NULL;
    delete curr;
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
    print(head);
    cout << endl;
    deleteNode(head, tail, 3);
    print(head);

    return 0;
}