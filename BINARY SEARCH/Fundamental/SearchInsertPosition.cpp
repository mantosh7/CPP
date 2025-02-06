/*
PROBLEM STATEMENT: Given a sorted array of nums consisting of distinct integers 
and a target value, return the index if the target is found. If not, return 
the index where it would be if it were inserted in order.

Example:
Input: nums = [1, 3, 5, 6], target = 5
Output: 2
Explanation: The target value 5 is found at index 2 in the sorted array. 
Hence, the function returns 2.
*/

#include<bits/stdc++.h>
using namespace std;

int searchPosition(vector<int>& nums, int target)
{
    int low = 0, high = nums.size() - 1 ;
    int ans = nums.size() ;
    while(low <= high)
    {
        int mid = low + (high - low) / 2 ;
        if(nums[mid] >= target)
        {
            ans = mid ;
            high = mid - 1 ;
        }
        else low = mid + 1 ;
    }
    return ans;
}

int main()
{
    vector<int> nums = {1,3,5,6};
    // int target = 5 ;
    // int target = 2 ;
    int target = 7 ;
    int position = searchPosition(nums, target);
    cout << target << " will be inserted at index " << position ;
}