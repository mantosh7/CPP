#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={6,2,7,3,1};
    int hash[8]={0};

    for(int i=0;i<5;i++)
    {
        hash[arr[i]]=1;
    }

    for(int i=7;i>0;i--)
    {
        if(hash[i]==0)
        {
            cout<<i<<" ";
        }
    }
    

    // map<int,int,greater<int>>mpp;

    // for(int i=0;i<5;i++)
    // {
    //     mpp[arr[i]]++;
    // }




    // for(auto it:mpp)
    // {
    //     if(it.second!=0)
    //     {
    //         cout<<it.first<<" ";
    //     }
    // }
    return 0;
}