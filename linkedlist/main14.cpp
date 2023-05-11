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

Node *reverseKNode(Node *&head, int k)
{
    if (head == NULL)
    {
        cout << "LL is empty " << endl;
        return head;
    }

    int len = getLength(head);

    if (k > len)
    {
        cout << "Enter valid value for K " << endl;
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;
    int count = 0;

    while (count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    if (forward != NULL)
    {
        head->next = reverseKNode(forward, k);
    }

    return prev;
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
    eightth->next = NULL;

    print(head);
    cout << endl;
    Node *newNode = reverseKNode(head, 4);
    print(newNode);

    return 0;
}