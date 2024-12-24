#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(){
        next = NULL;
    }

    Node(int x){
        data = x;
        next = NULL;
    }
};

class stackUsingLL {
    public:
        Node* top;
        int size;
       
        stackUsingLL(){
            size = 0;
            top = NULL;
        }

        void push(int x)
        {
            Node* temp = new Node(x);
            temp->next = top;
            top = temp;
            size++;
        }

        int pop(){
            Node* temp = top;
            top = top->next;
            int poppedItem = temp->data;
            delete(temp);
            size--;
            return poppedItem;
        }
};

int main()
{
    stackUsingLL stL;
    for(int i=1;i<=10;i++)
    {
        stL.push(i);
    }

    for(int i=1;i<=10;i++)
    {
        cout<<stL.pop()<<endl;
    }
    
    return 0;
}