#include<bits/stdc++.h>
using namespace std ;

class Node{
    public:
        int val ;
        Node* left ;
        Node* right ;

        Node(int val)
        {
            this->val = val ;
            left = nullptr ;
            right = nullptr ;
        }
};

Node* insertBST(Node* root, int data)
{
    if(root == nullptr) return new Node(data) ;

    if(data < root->val)
    {
        root->left = insertBST(root->left, data) ;
    }
    else {
        root->right = insertBST(root->right, data) ;
    }

    return root ;
}

void inorderTraversal(Node* root)
{
    if(root == NULL) return ;

    inorderTraversal(root->left) ;
    cout<<root->val<<" " ;
    inorderTraversal(root->right) ;
}

int main()
{
    int  arr[] = {50,30,70,20,40} ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    
    Node* root = NULL ;
    root = insertBST(root, arr[0]) ;

    for(int i=1;i<n;i++)
    {
        insertBST(root, arr[i]) ;
    }

    inorderTraversal(root) ;
    return 0 ;
}