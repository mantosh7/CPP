#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[15]={1,6,5,3,2,4,1,8,5,3,1,3,5,1,2};
    int hash[16]={0};
    for(int i=0;i<15;i++)
    {
        hash[arr[i]]+=1;
    }
    
    int a = 1;
    cout<<hash[a];
    
}