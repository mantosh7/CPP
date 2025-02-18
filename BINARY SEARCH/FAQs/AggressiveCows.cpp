/*
PROBLEM STATEMENT:  Given an array nums of size n, which denotes the positions of stalls, and an integer k, 
which denotes the number of aggressive cows, assign stalls to k cows such that the minimum distance between 
any two cows is the maximum possible. Find the maximum possible minimum distance.

Example:
Input: n = 6, k = 4, nums = [0, 3, 4, 7, 10, 9]
Output: 3
Explanation: The maximum possible minimum distance between any two cows will be 3 when 4 cows 
are placed at positions [0, 3, 7, 10]. Here the distances between cows are 3, 4, and 3 
respectively. We cannot make the minimum distance greater than 3 in any ways.
*/

#include<bits/stdc++.h>
using namespace std;

int maxPossMinDist(vector<int>& nums, int k)
{
    sort(nums.begin(), nums.end()) ;
    int n = nums.size() ;
    int low=1, high = nums[n-1]-nums[0] ;
    int ans = 1 ;

    while(low <= high)
    {
        int mid = low + (high - low) / 2 ;
        int cnt = 1 ;
        int lastAssignIdx = 0 ;

        for(int i=1;i<n;i++)
        {
            if(nums[i]-nums[lastAssignIdx] >= mid)
            {
                cnt++;
                lastAssignIdx = i ;
            }
        }
        if(cnt >= k)
        {
            ans = mid ;
            low = mid + 1 ;
        }
        else high = mid - 1 ;
    }
    return ans ;
}

int main()
{
    // vector<int> nums = {0, 3, 4, 7, 10, 9} ;
    // int k = 4 ;
    vector<int> nums = {10, 1, 2, 7, 5} ;
    int k = 3 ;

    cout<<"Maximum possible minimum distance is: "<<maxPossMinDist(nums,k);
}