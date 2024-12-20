#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,1,3,2,12,1,10};
    map<int,int>mpp;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        mpp[arr[i]]++;
    }
    
    int num=12;
    cout<<mpp[num];
}