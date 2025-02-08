/*
81. Search in Rotated Sorted Array II
PROBLEM STATEMENT: Given an integer array nums, sorted in ascending order (may contain duplicate values) and a 
target value k. Now the array is rotated at some pivot point unknown to you. Return True if k is present and 
otherwise, return False.

Example:
Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true
*/

#include<bits/stdc++.h>
using namespace std;

bool search(vector<int>& nums, int target)
{
    int low = 0, high = nums.size()-1 ;
    while(low <= high)
    {
        int mid = low + (high - low) / 2 ;
        if(nums[mid] == target) return true;
        if(nums[low]==nums[mid] && nums[mid]==nums[high])
        {
            low = low + 1 ; 
            high = mid - 1 ;
            continue;
        }
        // left part is sorted
        else if(nums[low] <= nums[mid])
        {
            if(nums[low]<=target && target<=nums[mid]) high = mid - 1 ; // eliminiate the right part
            else low = mid + 1 ;  // eliminate left part
        }
        // right part is sorted
        else{
            if(nums[mid]<=target && target<=nums[high]) low = mid + 1 ; // eliminate the left part
            else high = mid - 1 ;  // eliminate the right part
        }
    }
    return false;
}

int main()
{
    // vector<int> nums = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    // int target = 3 ;
    vector<int> nums= {2,5,6,0,0,1,2};
    int target = 3 ;

    bool flag = search(nums, target);
    cout << flag ;
}