#include<bits/stdc++.h>
using namespace std ;

class Node{
    public:
        int data ;
        Node* left ;
        Node* right ;

        Node(int value): data(value), left(NULL), right(NULL) {}
};

void inorder(Node* root)
{
    if(root == NULL) return ;

    inorder(root->left) ;
    cout<<root->data<<" " ;
    inorder(root->right) ;
}

int main()
{
    int x ;
    cout<<"Enter root element: " ;
    cin>>x ;

    queue<Node*> q ;
    Node* root = new Node(x) ;
    q.push(root) ;

    int leftChild, rightChild ;
    while(!q.empty())
    {
        Node* curr = q.front() ;
        q.pop() ;

        // left child
        cout<<"Enter left child of "<<curr->data<<" : " ;
        cin>>leftChild ;
        
        if(leftChild != -1) 
        {
            curr->left = new Node(leftChild) ;
            q.push(curr->left) ;
        }

        // right child
        cout<<"Enter right child of "<<curr->data<<" : " ;
        cin>>rightChild ;
        
        if(rightChild != -1)
        {
            curr->right = new Node(rightChild) ;
            q.push(curr->right) ;
        }
    }

    inorder(root) ;  // traversal
    return 0 ;
}