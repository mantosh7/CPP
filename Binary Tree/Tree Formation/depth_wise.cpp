#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value) : data(value), left(NULL), right(NULL) {}
};

void postorder(Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

Node *buildTreePostorder()
{
    int nodeValue;
    cin >> nodeValue;
    if (nodeValue == -1)
        return NULL;

    // Node create
    Node *root = new Node(nodeValue);

    // Left side create
    cout << "Enter left child of " << nodeValue << " :";
    root->left = buildTreePostorder();

    // Right side create
    cout << "Enter right child of " << nodeValue << " :";
    root->right = buildTreePostorder();

    // return node
    return root;
}

int main()
{
    cout << "Enter the root node: ";
    Node *root = buildTreePostorder();

    cout<<"Postorder Traversal: " ;
    postorder(root);
    return 0;
}