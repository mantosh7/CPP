/*
Subset sum equals to target

Problem Statement:
Given an array arr of n integers and an integer target, determine if there is a subset of the given array with a sum equal to the given target.

Examples:
Input: arr = [1, 2, 7, 3], target = 6
Output: True
Explanation: There is a subset (1, 2, 3) with sum 6
*/

#include <bits/stdc++.h>
using namespace std;

// memoization method
// bool check(vector<int>& arr, int idx, int target, vector<vector<int>>& dp)
// {
//     if(target == 0) return true ;
//     if(idx == 0) return arr[0]==target ;
//     if(dp[idx][target] != -1) return dp[idx][target] ;

//     bool notTaken = check(arr, idx-1, target, dp) ;
//     bool taken = false ;
//     if(arr[idx] <= target) taken = check(arr, idx-1, target-arr[idx], dp) ;

//     return dp[idx][target] = taken || notTaken ;
// }

int main()
{
    vector<int> arr = {7, 54, 4, 12, 15, 5};
    int target = 9;
    int n = arr.size();

    // space optimization
    vector<bool> dp(target + 1, false);
    vector<bool> curr(target + 1, false);

    // for anyone, if target==0 it has to be true
    dp[0] = true;
    curr[0] = true;

    // base case 2
    dp[arr[0]] = true;

    for (int idx = 1; idx < n; idx++)
    {
        for (int sum = 1; sum <= target; sum++)
        {
            bool notTaken = dp[sum];
            bool taken = false;
            if (arr[idx] <= sum)
                taken = dp[sum - arr[idx]];

            curr[sum] = taken || notTaken;
        }
        dp = curr;
    }
    cout << dp[target];

    // tabulation method
    // vector<vector<bool>> dp(n, vector<bool>(target + 1, false));

    // // base case 1
    // for (int idx = 0; idx < n; idx++)
    // {
    //     dp[idx][0] = true;
    // }

    // // base case 2
    // dp[0][arr[0]] = true;

    // for (int idx = 1; idx < n; idx++)
    // {
    //     for (int sum = 1; sum <= target; sum++)
    //     {
    //         bool notTaken = dp[idx - 1][sum];
    //         bool taken = false;
    //         if (arr[idx] <= sum)
    //             taken = dp[idx - 1][sum - arr[idx]];

    //         dp[idx][sum] = taken || notTaken;
    //     }
    // }
    // cout << dp[n - 1][target];

    // memoization method
    // vector<vector<int>> dp(n, vector<int>(target + 1, -1));
    // cout << check(arr, n - 1, target, dp);
}