#include<bits/stdc++.h>
using namespace std;
class QueueUsingStack{
    public:
        stack<int>s1; 
        stack<int>s2;

        // 1st APPROACH
        void push(int x)
        {
            s1.push(x);
        }

        int pop(){
            if(s2.size() == 0)
            {
                while(s1.size())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }

            int n = s2.top();
            s2.pop();
            return n;
        }

        int top()
        {
            if(s2.size() == 0)
            {
                while(s1.size())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }

            return s2.top();
        }
//------------------------------------------------
       
        // 2nd APPROACH
        // void push(int x)
        // {
        //     while(s1.size())
        //     {
        //         s2.push(s1.top());
        //         s1.pop();
        //     }
        //     s1.push(x);
        //     while(s2.size())
        //     {
        //         s1.push(s2.top());
        //         s2.pop();
        //     }
        // }
        
        // int pop(){
        //     int n =  s1.top();
        //     s1.pop();
        //     return n;
        // }
        
        // int top(){
        //     return s1.top();
        // }
        
};

int main()
{
    QueueUsingStack s;
    for(int i=1;i<=10;i++)
    {
        s.push(i);
    }
    for(int i=1;i<=10;i++)
    {
        cout<<s.pop()<<endl;
    }
}