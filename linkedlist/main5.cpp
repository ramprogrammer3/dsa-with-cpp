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

    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

int getLenght(Node *&head)
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

void deleteNode(int position, Node *&head, Node *&tail)
{

    if (head == NULL)
    {
        cout << "cannot delete , LL is empty " << endl;
    }

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    int length = getLenght(head);

    if (position == length)
    {
        int i = 1;
        Node *prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }

        prev->next = NULL;
        Node *temp = tail;
        tail = prev;
        delete temp;
        return;
    }

    int i = 1;
    Node *prev = head;
    while (i < position - 1)
    {
        prev = prev->next;
        i++;
    }

    Node *curr = prev->next;

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
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

    cout << "Printing linked list " << endl;
    Node *head = first;
    Node *tail = six;
    print(head);
    cout << "head ka data " << head->data << endl;
    cout << "Tail ka data " << tail->data << endl;
    deleteNode(6, head, tail);
    print(head);

    return 0;
}