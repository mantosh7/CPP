#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int arr[n] = {0,0,1,1,1,2,2,3,3,4};
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    

    // passing to the original array
    int index=0;
    for(auto it:s)
    {
        arr[index] = it;
        index++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}