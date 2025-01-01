#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int>v{7,1,5,3,6,4};
    vector<int>v{7,6,4,3,1};
    int n = v.size();

    int profit = 0;
    int maxProfit = 0;
    int mini = INT_MAX;  // to store minimum element among all the elements before the compared element

    for(int i=0;i<n;i++)
    {
        mini = min(mini,v[i]);  // stores the minimum element (for Buy)
        profit = v[i]-mini;   // stores the profit at every day
        maxProfit = max(maxProfit,profit);  // stores the maximum profit 
    }

    cout<<maxProfit;
    return 0;

}