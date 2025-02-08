/*
540. Single Element in a Sorted Array
PROBLEM STATEMENT: You are given a sorted array consisting of only integers where every element appears exactly twice, 
except for one element which appears exactly once.
Return the single element that appears only once.
Your solution must run in O(log n) time and O(1) space.

Example:
Input: nums = [3,3,7,7,10,11,11]
Output: 10
*/

#include<bits/stdc++.h>
using namespace std;
int singleEle(vector<int>& nums)
{
    int n = nums.size() ;
    // edge cases
    if(n==1) return nums[0] ;
    if(nums[0] != nums[1]) return nums[0] ;
    if(nums[n-1] != nums[n-2]) return nums[n-1] ;

    int low = 1, high = n-2 ;
    while(low <= high)
    {
        int mid = low + (high - low) / 2 ;
        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid] ;
        if(nums[mid] == nums[mid+1])
        {
            if(mid % 2 == 0) low = mid + 1 ;
            else high = mid - 1 ;
        }
        else{
            if(mid % 2 == 0) high = mid - 1 ;
            else low = mid + 1 ;
        }
    }
    return -1;
}

int main()
{
    // vector<int> nums = {3,3,7,7,10,11,11} ;
    vector<int> nums = {1,1,2,3,3,4,4,8,8} ;
    int single = singleEle(nums);
    cout << "Single Element :  " << single ;
}