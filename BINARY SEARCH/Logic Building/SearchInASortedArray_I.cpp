/*
Search in rotated sorted array-I
PROBLEM STATEMENT: Given an integer array nums, sorted in ascending order (with distinct values)
and a target value target. The array is rotated at some pivot point that is unknown.
Find the index at which target is present and if target is not present return -1.

Example:
Input : nums = [4, 5, 6, 7, 0, 1, 2], target = 0
Output: 4
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    // int target = 0;
    // int target = 3 ;
    int target = 5 ;

    int ans = -1;
    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            break;
        }
        // left part is sorted
        if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && target <= nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // right part is sorted
        else
        {
            if (nums[mid] <= target && target <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    cout << ans;
}