#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2,7,11,15};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    
    map<int,int>mp;
    
    for(int i=0;i<size;i++)
    {
        int remain = target-arr[i];
        
        if(mp.find(remain)!=mp.end())
        {
            cout<<"Indices are: "<<mp[remain]<<" "<<i;
            break;
        }
        else mp[arr[i]]=i;
    }
    
    return 0;
}