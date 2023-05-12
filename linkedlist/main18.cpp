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


Node* removeLoop(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty " << endl;
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;

        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (slow == fast)
        {
           slow = head;
           break;;
        }
    }
    Node* prev = fast;
    while(slow != fast){
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }

    prev->next = NULL;

    return slow;
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
    eightth->next = sixth;


    removeLoop(head);
    print(head);
    

    return 0;
}