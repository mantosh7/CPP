/*
714. Best Time to Buy and Sell Stock with Transaction Fee

Problem Statement:
You are given an array prices where prices[i] is the price of a given stock on the ith day, and an integer fee representing a transaction fee.
Find the maximum profit you can achieve. You may complete as many transactions as you like, but you need to pay the transaction fee for each transaction.

Note:
You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).
The transaction fee is only charged once for each stock purchase and sale.

Example 1:
Input: prices = [1,3,2,8,4,9], fee = 2
Output: 8
Explanation: The maximum profit can be achieved by:
- Buying at prices[0] = 1
- Selling at prices[3] = 8
- Buying at prices[4] = 4
- Selling at prices[5] = 9
The total profit is ((8 - 1) - 2) + ((9 - 4) - 2) = 8
*/

#include <bits/stdc++.h>
using namespace std;

// memoization method
// int calculateMaxProfit(vector<int>& prices, int fee, int idx, int buy, vector<vector<int>>& dp)
// {
//     if(idx == prices.size()) return 0 ;
//     if(dp[idx][buy] != -1) return dp[idx][buy] ;

//     int profit = 0 ;
//     if(buy == 1)
//     {
//         int bought = -prices[idx] + calculateMaxProfit(prices, fee, idx+1, 0, dp) ;
//         int notBought = 0 + calculateMaxProfit(prices, fee, idx+1, 1, dp) ;
//         profit = max(bought, notBought) ;
//     }
//     else{
//         int sold = prices[idx] - fee + calculateMaxProfit(prices, fee, idx+1, 1, dp) ;
//         int notsold = 0 + calculateMaxProfit(prices, fee, idx+1, 0, dp) ;
//         profit = max(sold, notsold) ;
//     }
//     return dp[idx][buy] = profit ;
// }

int main()
{
    // vector<int> prices = {1, 3, 7, 5, 10, 3};
    // int fee = 3;
    vector<int> prices = {1, 3, 2, 8, 4, 9};
    int fee = 2;
    int n = prices.size();

    // space optimization
    vector<int> dp(2, 0);
    vector<int> curr(2, 0);

    for (int idx = n - 1; idx >= 0; idx--)
    {
        for (int buy = 0; buy <= 1; buy++)
        {
            int profit = 0;
            if (buy == 1)
            {
                int bought = -prices[idx] + dp[0];
                int notBought = 0 + dp[1];
                profit = max(bought, notBought);
            }
            else
            {
                int sold = prices[idx] - fee + dp[1];
                int notsold = 0 + dp[0];
                profit = max(sold, notsold);
            }
            curr[buy] = profit;
        }
        dp = curr;
    }
    cout << dp[1];

    // tabulation method
    // vector<vector<int>> dp(n + 1, vector<int>(2, 0));

    // for (int idx = n - 1; idx >= 0; idx--)
    // {
    //     for (int buy = 0; buy <= 1; buy++)
    //     {
    //         int profit = 0;
    //         if (buy == 1)
    //         {
    //             int bought = -prices[idx] + dp[idx + 1][0];
    //             int notBought = 0 + dp[idx + 1][1];
    //             profit = max(bought, notBought);
    //         }
    //         else
    //         {
    //             int sold = prices[idx] - fee + dp[idx + 1][1];
    //             int notsold = 0 + dp[idx + 1][0];
    //             profit = max(sold, notsold);
    //         }
    //         dp[idx][buy] = profit;
    //     }
    // }
    // cout << dp[0][1];

    //  memoization method
    // vector<vector<int>> dp(n, vector<int>(2, -1));
    // cout << calculateMaxProfit(prices, fee, 0, 1, dp);
}