#include <iostream>
using namespace std;
class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    int data;
    cout << "Enter the data " << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);
    cout << "Enter the data for left part : " << data << " node " << endl;
    root->left = buildTree();
    cout << "Enter the data for right par : " << data << " node " << endl;
    root->right = buildTree();
    return root;
}

void postorder(Node *root)
{

    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{

    Node *root = NULL;

    root = buildTree();

    postorder(root);

    // 90 20 11 -1 -1 13 -1 -1 50 -1 -1

    return 0;
}