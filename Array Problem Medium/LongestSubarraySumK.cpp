/*
Longest subarray with sum K
PORBLEM STATEMENT: Given an array nums of size n and an integer k, find the length of the longest 
sub-array that sums up to k. If no such sub-array exists, return 0.

Examples:
Input: nums = [10, 5, 2, 7, 1, 9],  k=15
Output: 4
Explanation: The longest sub-array with a sum equal to 15 is [5, 2, 7, 1], which has a length of 4
*/

#include<bits/stdc++.h>
using namespace std;

int SubarrayKSum(vector<int>& nums, int k)
{
    int n = nums.size();
    int sum = 0; 
    int maxi = -1;  // for storing length of longest subarray
    unordered_map<int,int> mp;  // for storing previous sum

    for(int i=0;i<n;i++)
    {
        sum += nums[i];
        if(sum == k)
        {
            maxi = max( maxi, i+1 );
        }

        int rem = sum - k ;  // rem contain the remaining to search in map

        // rem is found in the map
        if(mp.find(rem) != mp.end())
        {
            int len = i - mp[rem] ;
            maxi = max( maxi, len );
        }

        // we have to map the sum in map , if it is already present in the map, no need to map it again
        if(mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }
    return maxi;
}

int main()
{
    vector<int> nums = {1,2,3,1,1,1,1,4,2,3};
    int K = 3;
    // vector<int> nums = {10,5,2,7,1,9};
    // int K = 15;
    // vector<int> nums = {-3,2,1};
    // int K = 6;
    

    int longest = SubarrayKSum(nums, K);
    cout<<"Longest subarray with K="<<K<<" is "<<longest ;
}