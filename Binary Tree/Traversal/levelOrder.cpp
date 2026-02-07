/*  Level-order Traversal  */
#include<bits/stdc++.h>
using namespace std ;

class Node{
    public:
        int data ;
        Node* left ;
        Node* right ;

        Node(int val): data(val), left(NULL), right(NULL) {}
};

Node* buildTreeLevelWise(vector<int>& nums)
{
    int n = nums.size() ;

    Node* root = new Node(nums[0]) ;
    queue<Node*> q ;
    q.push(root) ;
    int i=1 ;

    while(!q.empty())
    {
        Node* curr = q.front() ;
        q.pop() ;

        if(i<n && nums[i]!=-1)
        {
            curr->left = new Node(nums[i]) ;
            q.push(curr->left) ;
        }
        i++ ;

        if(i<n && nums[i]!=-1)
        {
            curr->right = new Node(nums[i]) ;
            q.push(curr->right) ;
        }
        i++ ;
    }

    return root ;
}

// Agar mujhe level-wise separation nahi chahiye (Warna size lga ke traversal karna padega)
void levelOrder(Node* root)
{
    queue<Node*> q ;
    q.push(root) ;

    while(!q.empty())
    {
        Node* curr = q.front() ;
        q.pop() ;
        cout<<curr->data<<" " ;

        if(curr->left != NULL) q.push(curr->left) ;
        if(curr->right != NULL) q.push(curr->right) ;
        
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, -1, 6, -1, -1, 7, 8} ;

    // Tree Creation
    Node* root = buildTreeLevelWise(nums) ;

    // Tree Traversal Level-Wise
    levelOrder(root) ;
}