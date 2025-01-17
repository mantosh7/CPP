/*
Problem Statement: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:
Input: nums = [1,2,3,1]
Output: true
*/

#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> nums)
{
    int mini = INT_MAX;
    int maxi = INT_MIN;
    
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]<mini || nums[i]>maxi)
        {
            mini = min(mini,nums[i]);
            maxi = max(maxi,nums[i]);
            continue;
        }
        
        for(int j=0;j<i;j++)
        {
            if(nums[j]==nums[i]) return true;
        }
    }
    return false;
}

int main()
{
    // vector<int> nums {1,2,3,4};
    vector<int> nums {1,5,-2,-4,0};
    bool check = containsDuplicate(nums);
    cout<<check;
}