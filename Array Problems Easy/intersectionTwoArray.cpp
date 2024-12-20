#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,2,3,3,4,5,6};
    int b[]={2,3,3,5,6,6,7};
    vector<int>v;
    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(a[i]==b[j])
        {
            v.push_back(a[i]);
            i++;
            j++;
        }
        
        else if(a[i]>b[j]) j++;
        else i++;
    }

    for(auto it:v)
    {
        cout<<it<<" ";
    }
    return 0;
}