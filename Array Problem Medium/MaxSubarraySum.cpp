/*  PROBLEM STATEMENT
Given an integer array nums, find the 
subarray with the largest sum, and return its sum.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums{-2,1,-3,4,-1,2,1,-5,4};
    // vector<int>nums{5,4,-1,7,8};
    // vector<int>nums{1};
    int n = nums.size();

    // Optimal Solution
    int sum = 0;
    int maxSum = INT_MIN;
    int startIdx = 0, endIdx = -1;
    
    for(int i=0;i<n;i++)
    {
        sum = sum + nums[i];
        if(sum>maxSum)
        {
            maxSum = sum;
            endIdx = i;
        }
        if(sum<0)
        {
            sum = 0;
            startIdx = i+1;
        }
    }
    cout<<"subarray with maximum sum: "<<maxSum<<endl;
    cout<<"Subarray: ";
    for(int i=startIdx;i<=endIdx;i++)
    {
        cout<<nums[i]<<",";
    }

    // Better Approach
    // int maxi = INT_MIN;
    // int sum = 0;

    // for(int i=0;i<n;i++)
    // {
    //     sum = 0;
    //     for(int j=i;j<n;j++)
    //     {
    //         sum+=nums[j];
    //     }
    //     maxi = max(maxi,sum);
    // }
    // cout<<maxi;
    // return 0;
}