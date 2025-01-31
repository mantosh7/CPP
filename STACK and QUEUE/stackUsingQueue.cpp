#include<bits/stdc++.h>
using namespace std;

class Queue {
    public:
        queue<int> q;

        void push(int x)
        {
            int s = q.size();
            q.push(x);
            for(int i=1;i<=s;i++)
            {
                q.push(q.front());
                q.pop();
            }
        }

        int pop(){
            if(q.empty()) return -1;
            int n = q.front();
            q.pop();
            return n;
        }

        int top(){
            return q.front();
        }

        bool isempty(){
            return q.empty();
        }
};

int main()
{
    Queue q;
    for(int i=1;i<=10;i++)
    {
        q.push(i);
    }

    for(int i=1;i<=10;i++)
    {
        // int n = q.pop();
        cout<<q.pop()<<endl;
    }
}