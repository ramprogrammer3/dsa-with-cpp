#include<iostream>
#include <queue>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }

};

Node* buildTree(){
    int data;
    cout << "Enter the data " << endl;
    cin >> data;

    if(data == -1){
        return NULL;
    }

    Node * root = new Node(data);
    cout << "Enter the data for left part : " <<data << " node " << endl;
    root->left = buildTree();
    cout << "Enter the data for right par : " << data << " node " << endl;
    root->right = buildTree();
    return root;

}

void levelOrderTraversal(Node *root)
{

    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left)
        {
            q.push(temp->left);
        }

        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}

int main(){

    Node *root = NULL;

    root = buildTree();

    levelOrderTraversal(root);

    return 0;
}