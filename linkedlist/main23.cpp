#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

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

void findKThNode(Node* head, int &pos, int &ans){
    
    if(head == 0) return;
    findKThNode(head->next,pos,ans);
    
    if(pos == 0){
     ans = head->data;
    }
    pos--;
    
}

int main(){

    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    int ans = -1;
    int pos = 2;

   findKThNode(head,pos,ans);

    cout << "The kth node is " << ans << endl;


    return 0;
}