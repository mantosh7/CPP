#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=6;
    int arr[6]={13,46,24,52,20,9};
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}