#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Method 1 (optimise code)
    int arr1[]={1,1,2,3,4,5};
    int arr2[]={2,3,4,4,5,6};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    vector<int> v;
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            if(v.size()==0||v.back()!=arr1[i])
            {
                v.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(v.size()==0||v.back()!=arr2[j])
            {
                v.push_back(arr2[j]);
            }
            j++;
        }
    }

    
    while(i<n1)
    {
        if(v.size()==0||v.back()!=arr1[i])
        {
            v.push_back(arr1[i]);
        }
        i++;
    }
    
    
    while(j<n2)
    {
        if(v.size()==0||v.back()!=arr2[j])
        {
            v.push_back(arr2[j]);
        }
        j++;
    }
    
    // Method 2 (Brute Force)
    // int a[]={1,1,2,3,4,5};
    // int b[]={2,3,4,4,5,6};
    // int aSize = sizeof(a)/sizeof(a[0]);;
    // int bSize = sizeof(b)/sizeof(b[0]);
    // set<int>s;
    // vector<int>v;
    // for(int i=0;i<aSize;i++)
    // {
    //     s.insert(a[i]);
    // }
    // for(int i=0;i<bSize;i++)
    // {
    //     s.insert(b[i]);
    // }
    // for(auto it:s)
    // {
    //     v.push_back(it);
    // }

    // for(auto it:v)
    // {
    //     cout<<it<<" ";
    // }
    
    return 0;
}
       
