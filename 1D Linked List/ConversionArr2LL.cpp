#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data1,Node* next1)
    {
        data = data1;
        next = next1;
    }

    // Another constructor
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node* conversionArr2LL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main()
{
    vector<int> arr = {12,5,7,8,10};
    Node* head = conversionArr2LL(arr);
    // cout<<head->data;  //  print 12

    // traversing in LL
    Node* temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        cout<<temp->data <<" ";
        temp = temp->next;
        count++;
    }

    cout << endl;
    // Length of LL
    cout << "Length=" << count;
}