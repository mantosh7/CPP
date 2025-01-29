/*
PROBLEM STATEMENT: Find the repeating and missing number

Given an integer array nums of size n containing values from [1, n] and each value appears 
exactly once in the array, except for A, which appears twice and B which is missing.
Return the values A and B, as an array of size 2, where A appears in the 0-th index and 
B in the 1st index.

Examples:
Input: nums = [3, 5, 4, 1, 1]
Output: [1, 2]
Explanation: 1 appears two times in the array and 2 is missing from nums
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums= {6, 5, 7, 1, 8, 6, 4, 3, 2};
    // vector<int> nums = {1, 2, 3, 6, 7, 5, 7} ;
    // vector<int> nums = {3, 4, 5, 1, 1} ;

    long long n = nums.size();
    long long SN = ( n * (n + 1) ) / 2 ;
    long long S2N = ( n * ( n + 1 ) * ( 2*n + 1 )) / 6 ;
    long long S = 0, S2 = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        S += nums[i] ;
        S2 += (long long)nums[i] * (long long)nums[i] ;
    }

    long long val1 = S - SN ;
    long long val2 = S2 - S2N ;
    val2 =  val2 / val1 ;

    long long X = ( val1 + val2 ) / 2 ;
    long long Y = X - val1 ;

    cout<<"Repeated Element : "<< (int)X << endl ;
    cout<<"Missing Element : "<< (int)Y ;
}