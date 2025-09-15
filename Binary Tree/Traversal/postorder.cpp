/*  Pre-order Traversal  */
#include<bits/stdc++.h>
using namespace std ;

class Node{
    public:
        int data ;
        Node* left ;
        Node* right ;

        Node(int val)
        {
            data = val ;
            left = nullptr ;
            right = nullptr ;
        }
};

void findPostorder(Node* root, vector<int>& postorder)
{
    stack<Node*> st1 ;
    stack<Node*> st2 ;

    st1.push(root) ;
    while(!st1.empty())
    {
        Node* temp = st1.top() ;
        st1.pop() ;

        st2.push(temp) ;
        if(temp->left != nullptr) st1.push(temp->left) ;
        if(temp->right != nullptr) st1.push(temp->right) ;
    }

    while(!st2.empty()) 
    {
        postorder.push_back(st2.top()->data) ;
        st2.pop() ;
    } 
}

int main()
{
    Node* root = new Node(1) ;
    root->left = new Node(2) ;
    root->right = new Node(3) ;
    root->left->left = new Node(4) ;
    root->left->right = new Node(5) ;

    if(root == nullptr)  cout<<"no tree exist."  ;

    vector<int> postorder ;
    findPostorder(root, postorder) ;

    cout<<"Postorder : " ;
    for(auto it: postorder) cout<<it<<" " ;

    return 0 ;
}