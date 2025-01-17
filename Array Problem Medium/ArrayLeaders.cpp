/*
PROBLEM STATEMENT : You are given an array arr of positive integers. Your task is to find all the leaders in the array. An element is considered a leader if it is greater than or equal to all elements to its right. The rightmost element is always a leader.

Input: arr = [16, 17, 4, 3, 5, 2]
Output: [17, 5, 2]
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> arr{16, 17, 4, 3, 5, 2};
    vector<int> arr{10,4,2,4,1};
    vector<int> nums;

    int n = arr.size();
    int maxi = INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>=maxi)
        {
            nums.push_back(arr[i]);
            maxi = arr[i];
        }
    }
    reverse(nums.begin(),nums.end());

    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}