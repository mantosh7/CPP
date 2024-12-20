#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,0,3,0,12};
    int n=5;
    int count=0;
    while(arr[count]!=0)
    {
        count++;
    }
    for(int i=count+1,j=count;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}