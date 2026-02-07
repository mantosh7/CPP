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

Node *buildTree(vector<int>& nums)
{
    int n = nums.size();
    if(n == 0) return NULL ;  // if array is empty, return NULL 

    queue<Node *> q;
    Node *root = new Node(nums[0]);
    q.push(root);

    int idx = 1 ;
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        // left child
        if (idx<n && nums[idx]!=-1)
        {
            curr->left = new Node(nums[idx]);
            q.push(curr->left);
        }
        idx++ ;

        // right child
        if (idx<n && nums[idx]!=-1)
        {
            curr->right = new Node(nums[idx]);
            q.push(curr->right);
        }
        idx++ ;
    }
    return root ;
}

void invertTree(Node* root)
{
    if(root == NULL) return ;

    // Swapping of nodes
    Node* temp = root->left ;
    root->left = root->right ;
    root->right = temp ;

    // solving for left
    invertTree(root->left) ;

    // solving for right
    invertTree(root->right) ;
}

void inorder(Node* root)
{
    if(root == NULL) return ;

    inorder(root->left) ;
    cout<<root->data<<" " ;
    inorder(root->right) ;
}

int main()
{
    vector<int> nums = {4,2,7,1,3,6,9} ;
    Node* root = buildTree(nums) ;

    invertTree(root) ;
    inorder(root) ;
    return 0;
}