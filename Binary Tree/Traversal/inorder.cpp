/*  In-order Traversal  */
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

void findInorder(Node* root, vector<int>& inorder)
{
    stack<Node*> st ;
    st.push(root) ;
    Node* temp = root->left ;

    while(!st.empty() || temp!=nullptr)
    {
        if(temp != NULL)
        {
            st.push(temp) ;
            temp = temp->left ;
        }
        else{
            temp = st.top() ;
            st.pop() ;
            inorder.push_back(temp->data) ;
            temp = temp->right ;
        }
    }
}

int main()
{
    Node* root = new Node(1) ;
    root->left = new Node(4) ;
    root->left->left = new Node(4) ;
    root->left->right = new Node(2) ;

    if(root == nullptr)  cout<<"no tree exist."  ;

    vector<int> inorder ;
    findInorder(root, inorder) ;

    cout<<"Inorder : " ;
    for(auto it: inorder) cout<<it<<" " ;

    return 0 ;
}