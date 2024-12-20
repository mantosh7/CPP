#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp=0,count=0;
    for(int i=0;i<n; )
    {
        
        if(arr[i]==1)
        {
            temp=count;
            count=0;
            while(i<n&&arr[i]!=0)
            {
                count++;
                i++;
            }

            if(count<temp) count=temp;
        }
        else i++;
    }
    cout<<count;
    return 0;
}