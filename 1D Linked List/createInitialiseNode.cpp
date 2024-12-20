#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1)
    {
        data = data1;
        next = next1;
    }

    public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
int main()
{
    vector<int> arr = {2,5,7,8};
    Node* y = new Node(2,nullptr);
    Node* x = new Node(10);
    cout << y << endl;  // next node address
    cout << y->data << endl;  // next node data
    cout << x << endl;
    cout << x->data;
}