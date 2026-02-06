#include<bits/stdc++.h>
using namespace std ;

int solve(vector<int>& nums, int idx)
{
    if(idx >= nums.size()) return 0 ;

    int take = 0 ;
    if(nums[idx] <= 0) take = solve(nums, idx+1) ;
    else take = nums[idx] + solve(nums, idx+2) ;

    int notTake = solve(nums, idx+1) ;

    return max(take, notTake) ;
}

int main()
{
    vector<int> arr = {1,2,-6,1,2,-4} ;
    int ans = solve(arr, 0) ;
    cout<<"Maximum sum = "<<ans ;
}