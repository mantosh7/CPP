#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={5,4,3,2,1};
    int n=5;
    for(int i=1;i<=n-1;i++)
    {
        int j=i;
        while(arr[j-1]>arr[j]&&j>0)
        {
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }

    return 0;
}