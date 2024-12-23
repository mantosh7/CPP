#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=6;
    int arr[6]={13,46,24,52,20,9};
    for(int i=0;i<n-1;i++)
    {
        int swap=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=1;
            }
        }
        if(swap==0) break;
        cout<<"nums\n";
    } 

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}