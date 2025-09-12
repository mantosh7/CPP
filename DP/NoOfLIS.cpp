/*
673. Number of Longest Increasing Subsequenc
Problem Statement:
Given an integer array nums, return the number of longest increasing subsequences.

Notice that the sequence has to be strictly increasing.

Example:
Input: nums = [1,3,5,4,7]
Output: 2
Explanation: The two longest increasing subsequences are [1, 3, 4, 7] and [1, 3, 5, 7].

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1,3,5,4,7};
    // vector<int> nums = {2, 2, 2, 2, 2};
    int n = nums.size();
    vector<int> dp(n, 1);
    vector<int> numOfLongest(n, 1);

    int maxi = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[j] < nums[i])
            {
                if (dp[j] + 1 > dp[i])
                {
                    dp[i] = dp[j] + 1;
                    numOfLongest[i] = numOfLongest[j];
                }
                else if (dp[j] + 1 == dp[i])
                {
                    numOfLongest[i] += numOfLongest[j];
                }
            }
        }
        maxi = max(maxi, dp[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (dp[i] == maxi)
            ans += numOfLongest[i];
    }
    cout<< "The no. of LIS : " << ans;
}