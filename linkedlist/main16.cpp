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

bool isCircular(Node *head)
{
    // Your code here
    if (head == NULL)
        return true;

    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        if (temp == head)
            return true;
    }
    return false;
}

int main()
{

    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *four = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    Node *seventh = new Node(70);
    Node *eightth = new Node(80);

    head->next = second;
    second->next = third;
    third->next = four;
    four->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eightth;
    eightth->next = head;

    // print(head);

    if (isCircular(head))
    {
        cout << "LL is circular " << endl;
    }
    else
    {
        cout << "LL is not circular " << endl;
    }

    return 0;
}