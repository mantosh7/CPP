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

class queueUsingLL {
    public:
        Node* start;
        Node* end;
        int size;
       
        queueUsingLL(){
            size = 0;
            start = NULL;
            end = NULL;
        }

        void push(int x)
        {
            if(start==NULL && end==NULL)
            {
                Node* temp = new Node(x);
                start = end = temp;
                size++;
            }
            else{
                Node* temp = new Node(x);
                end->next = temp;
                end = temp;
                size++;
            }
            
        }

        int pop(){
            if(start==NULL) return -1;
            int poppedItem = start->data;
            if(start==end){
                start=end=NULL;
                size--;
            }
            else{
                Node* temp = start;
                start = start->next;
                delete(temp);
                size--;
            }
            return poppedItem;
        }
};

int main()
{
    queueUsingLL qL;
    for(int i=1;i<=10;i++)
    {
        qL.push(i);
    }

    for(int i=1;i<=10;i++)
    {
        cout<<"hello"<<qL.pop()<<endl;
    }
    
    return 0;
}