/*
525. Contiguous Array
PROBLEM STATEMENT: Given a binary array nums, return the maximum length of a contiguous subarray 
                   with an equal number of 0 and 1.
Example:
Input: nums = [0,0,1,0,0,0,1,1]
Output: 6 [1,0,0,0,1,1]
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> nums = {1,0,1};
    vector<int> nums = {0,0,1,0,0,0,1,1};
    int n = nums.size();

    unordered_map<int,int> mp;  // for stroing sum as key and index as their value
    int sum = 0;
    int maxi = 0; // for storing maximum possible subarray

    for(int i=0;i<n;i++)
    {
        if(nums[i]==0) sum -= 1;
        else sum += 1;

        if(sum==0)
        {
            int size = i+1;
            maxi = max(maxi,size);
        }
        else if(mp.find(sum) != mp.end())
        {
            int size = i-mp[sum];
            maxi = max(maxi,size);
        }
        else{
            mp[sum] = i;
        }
    }
    cout<<"Maximum Possible Subarray woth equal 0's & 1's : "<<maxi;
}