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

int getLength(Node *&head)
{
    Node *temp = head;
    int length = 0;

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

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    Node *head = first;
    Node *tail = third;

    cout << "printing linked list " << endl;
    print(head);

    cout << endl;
    cout << "head of linked list is " << head->data << endl;
    cout << "Tail of linked list is " << tail->data << endl;

    cout << "Length of linked list is " << getLength(head) << endl;

    return 0;
}