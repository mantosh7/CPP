#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=9;
    for(int i=0;i<n;i++)
    {
        if(i>n/2)
        {
            for(int j=0;j<n-i;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
        
        else{
            for(int j=0;j<i+1;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
    }
    return 0;
}