#include<bits/stdc++.h>
using namespace std ;

int findMaxProductThreeNum(vector<int>& nums){
    int n = nums.size() ;

    sort(nums.begin(), nums.end()) ;
    int maxi1 = nums[0]*nums[1]*nums[n-1] ;
    int maxi2 = nums[n-3]*nums[n-2]*nums[n-1] ;

    return max(maxi1, maxi2) ;
}

int main()
{
    vector<int> nums = {-1, -2, -3} ;
    int ans = findMaxProductThreeNum(nums) ;
    cout<< "Maximum Product of three number = " << ans ;
    return 0 ;
}