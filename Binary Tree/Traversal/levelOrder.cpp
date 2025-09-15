/*  Level-order Traversal  */
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

void findPreorder(Node* root, vector<int>& preorder)
{
    stack<Node*> st ;
    Node* temp = root ;

    while(!st.empty() || temp!=nullptr)
    {
        if(temp != NULL)
        {
            preorder.push_back(temp->data) ;
            if(temp->right != nullptr) st.push(temp->right) ;
            temp = temp->left ;
        }
        else{
            if(st.empty()) break ;
            temp = st.top() ;
            st.pop() ;
        }
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

    vector<int> preorder ;
    findPreorder(root, preorder) ;

    cout<<"Preorder : " ;
    for(auto it: preorder) cout<<it<<" " ;

    return 0 ;
}