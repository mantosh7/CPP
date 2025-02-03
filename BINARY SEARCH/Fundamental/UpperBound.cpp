/*
Lower Bound
PROBLEM STATEMENT: Given a sorted array of nums and an integer x, write a program
to find the lower bound of x. The lower bound algorithm finds the first or the 
smallest index in a sorted array where the value at that index is greater than 
a given key i.e. x.
If no such index is found, return the size of the array.

Example:
Input : nums= [1,2,2,3], x = 2
Output:1
Explanation: Index 1 is the smallest index such that arr[1] >= x.
*/

#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& nums, int x)
{
    int lbIdx = -1;
    int low = 0, high = nums.size()-1 ;
    while(low<=high)
    {
        int mid = low + (high - low)/2 ;
        
        if(nums[mid] <= x) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}

int main()
{
    vector<int> nums = {1,2,2,3};
    int x = 2;
    // vector<int> nums = {3,5,8,15,19};
    // int x = 9;

    cout<<lowerBound(nums,x);
}