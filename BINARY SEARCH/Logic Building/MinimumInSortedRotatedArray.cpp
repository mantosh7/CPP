/*
Find minimum in Rotated Sorted Array
PROBLEM STATEMENT: Given an integer array nums of size N, sorted in ascending order with distinct values, 
and then rotated an unknown number of times (between 1 and N), find the minimum element in the array.

Example:
Input : nums = [4, 5, 6, 7, 0, 1, 2, 3]
Output: 0
*/

#include<bits/stdc++.h>
using namespace std;
int minElement(vector<int>& nums)
{
    int low = 0, high = nums.size()-1 ;
    int mini = INT_MAX ;
    while(low <= high)
    {
        int mid = low + (high - low) / 2 ;
        // left part sorted
        if(nums[low] <= nums[mid])
        {
            mini = min(mini, nums[low]);  // storing min element
            low = mid + 1 ;  // eliminate left part
        }
        // right part sorted
        else{
            mini = min(mini, nums[mid]) ; // storing min element
            high = mid - 1 ;  // eliminate right part
        }
    }
    return mini ;
}

int main()
{
    // vector<int> nums = {4,5,6,7,0,1,2,3};
    vector<int> nums = {4, 5, 6, 7, -7, 1, 2, 3} ;

    int minimum = minElement(nums);
    cout << "The minimum element is : " << minimum ;
}