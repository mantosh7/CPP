#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high)
{
    int i=low,j=high,pivot=low;
    while(i<j)
    {
        // for increasing order
        while(arr[i]<=arr[pivot] && i<high)
        {
            i++;
        }
        while(arr[j]>arr[pivot] && j>low)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[pivot],arr[j]);
    return j;
}

void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pIndex = partition(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);
    }
}

int main()
{
    int arr[] = {4,6,2,5,7,9,1,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,len-1);
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}