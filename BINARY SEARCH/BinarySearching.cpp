/*
Search X in sorted array
PROBLEM STATEMENT: Given a sorted array of integers nums with 0-based indexing, 
find the index of a specified target integer. If the target is found in the 
array, return its index. If the target is not found, return -1.

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: The target integer 9 exists in nums and its index is 4
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    // vector<int> nums = {-1,0,3,5,9,12};
    // int target = 2;
    int low = 0, high = nums.size()-1;
    int idx = -1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(nums[mid]==target)
        {
            idx = mid;
            break;
        }
        else if(nums[mid]<target) low = mid + 1;
        else high = mid - 1;
    }
    if(idx==-1) cout << target <<" is not present in the given array.";
    else cout << target << " is pesent at index " << idx ;
}