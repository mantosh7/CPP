/*
1143. Longest Common Subsequence

problem statement:
Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings.

Example 1:
Input: text1 = "abcde", text2 = "ace"
Output: 3
Explanation: The longest common subsequence is "ace" and its length is 3.
*/

#include <bits/stdc++.h>
using namespace std;

// memoization method
// int findLCS(string str1, string str2, int i, int j, vector<vector<int>>& dp)
// {
//     if(i < 0 || j < 0) return 0 ;
//     if(dp[i][j] != -1) return dp[i][j] ;

//     if(str1[i] == str2[j])
//     {
//         return dp[i][j] = 1 + findLCS(str1, str2, i-1, j-1, dp) ;
//     }
//     else return dp[i][j] = max(findLCS(str1, str2, i-1, j, dp), findLCS(str1, str2, i, j-1, dp)) ;
// }

int main(){
    string str1 = "abcde";
    string str2 = "ace";

    int n = str1.size();
    int m = str2.size();

    vector<int> prev(m + 1, 0);
    vector<int> curr(m + 1, 0);

    // logic
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                curr[j] = 1 + prev[j - 1];
            }

            else
                curr[j] = max(prev[j], curr[j - 1]);
        }
        prev = curr;
    }
    cout << "Longest Common subsequence : " << prev[m];

    // tabulation method
    // vector<vector<int>> dp(n+1, vector<int>(m+1, -1)) ;
    // // base case
    // for(int i=0;i<=n;i++) dp[i][0] = 0 ;
    // for(int i=0;i<=m;i++) dp[0][i] = 0 ;

    // // logic
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m;j++)
    //     {
    //         if(str1[i-1] == str2[j-1])
    //         {
    //             dp[i][j] = 1 + dp[i-1][j-1] ;
    //         }

    //         else dp[i][j] = max(dp[i-1][j], dp[i][j-1]) ;
    //     }
    // }
    // cout <<"Longest Common subsequence : " << dp[n][m] ;

    // memoization method
    // vector<vector<int>> dp(n, vector<int>(m, -1)) ;
    // int ans = findLCS(str1, str2, n-1, m-1, dp) ;
    // cout <<"Longest Common subsequence : " << ans ;
}