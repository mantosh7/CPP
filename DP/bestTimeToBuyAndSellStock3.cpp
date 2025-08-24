/*
123. Best Time to Buy and Sell Stock III

You are given an array prices where prices[i] is the price of a given stock on the ith day.
Find the maximum profit you can achieve. You may complete at most two transactions.
Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

Example 1:
Input: prices = [3,3,5,0,0,3,1,4]
Output: 6
Explanation: Buy on day 4 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.
Then buy on day 7 (price = 1) and sell on day 8 (price = 4), profit = 4-1 = 3.
*/


#include <bits/stdc++.h>
using namespace std;

// memoization method
// int calculateMaxProfit(vector<int>& prices, int  idx, int buy, int cnt, vector<vector<vector<int>>>& dp)
// {
//     if(cnt == 0) return 0 ;
//     if(idx==prices.size()) return 0 ;
//     if(dp[idx][buy][cnt] != -1) return dp[idx][buy][cnt] ;

//     int profit = 0 ;
//     if(buy == 1)
//     {
//         int bought = -prices[idx] + calculateMaxProfit(prices, idx+1, 0, cnt, dp) ;
//         int notBought = 0 + calculateMaxProfit(prices, idx+1,  1, cnt, dp) ;
//         profit = max(bought, notBought) ;
//     }
//     else{
//         int sold = prices[idx] + calculateMaxProfit(prices, idx+1, 1, cnt-1, dp) ;
//         int notSold = 0 + calculateMaxProfit(prices, idx+1, 0, cnt, dp) ;
//         profit = max(sold, notSold) ;
//     }
//     return dp[idx][buy][cnt] = profit ;
// }

int main()
{
    vector<int> prices = {3,3,5,0,0,3,1,4} ;
    // vector<int> prices = {1, 2, 3, 4, 5};
    int n = prices.size();

    // space optimization
    vector<vector<int>> ahead(2, vector<int>(3, 0));
    vector<vector<int>> curr(2, vector<int>(3, 0));

    for (int idx = n - 1; idx >= 0; idx--)
    {
        for (int buy = 0; buy <= 1; buy++)
        {
            for (int cnt = 1; cnt <= 2; cnt++)
            {
                int profit = 0;

                if (buy == 1)
                {
                    int bought = -prices[idx] + ahead[0][cnt];
                    int notBought = 0 + ahead[1][cnt];
                    profit = max(bought, notBought);
                }
                else
                {
                    int sold = prices[idx] + ahead[1][cnt - 1];
                    int notSold = 0 + ahead[0][cnt];
                    profit = max(sold, notSold);
                }
                curr[buy][cnt] = profit;
            }
            ahead = curr;
        }
    }
    cout << ahead[1][2];

    // tabulation method
    // vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(3, 0))) ;

    // for(int idx=n-1;idx>=0;idx--)
    // {
    //     for(int buy=0;buy<=1;buy++)
    //     {
    //         for(int cnt=1;cnt<=2;cnt++)
    //         {
    //             int profit = 0 ;
    //             if(buy == 1)
    //             {
    //                 int bought = -prices[idx] + dp[idx+1][0][cnt] ;
    //                 int notBought = 0 + dp[idx+1][1][cnt] ;
    //                 profit = max(bought, notBought) ;
    //             }
    //             else{
    //                 int sold = prices[idx] + dp[idx+1][1][cnt-1] ;
    //                 int notSold = 0 + dp[idx+1][0][cnt] ;
    //                 profit = max(sold, notSold) ;
    //             }
    //             dp[idx][buy][cnt] = profit ;
    //         }
    //     }
    // }
    // cout<< dp[0][1][2] ;

    // memoization method
    // vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1))) ;
    // cout<< calculateMaxProfit(prices, 0, 1, 2, dp) ;
}
