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

    cout << "Enter data for left part " << data << " node " << endl;
    root->left = buildTree();
    cout << "Enter data for right part " << data << " node " << endl;
    root->right = buildTree();
    return root;
}

int height(Node *root)
{

    if (root == NULL)
        return 0;

    int leftHeight = height(root->left);
    int rightHeiht = height(root->right);

    int ans = max(leftHeight, rightHeiht);

    return ans + 1;
}

int main()
{

    Node *root = NULL;

    root = buildTree();

    int height1 = height(root);

    cout << height1 << endl;
}