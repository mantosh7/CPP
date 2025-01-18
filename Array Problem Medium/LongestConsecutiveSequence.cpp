/*
PROBLEM STATEMENT: Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

Example 1:
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

Example 2:
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums{0,3,7,2,5,8,4,6,0,1};
    // vector<int> nums{100,4,200,3,1,2};
    int n = nums.size();
    if(n==0)
    {
        cout<<0;
        return 0;
    }

    // Optimal Solution [TC = O(3n)]
    int longest = 1;
    unordered_set<int>st;

    // TC = O(n)
    for(int i=0;i<n;i++)
    {
        st.insert(nums[i]);
    }

    // TC = O(n)
    for(auto it:st)
    {
        if(st.find(it-1) == st.end())
        {
            int count = 1;
            int x = it;
            // TC = O(n)
            while(st.find(x+1) != st.end())
            {
                x++;
                count++;
            }
            longest = max(longest,count);
        }
    }
    cout<<"The longest consecutive sequence is: "<<longest;


    //  Better approach [TC = O(n + nlogn)]
    // if(n==0) return 0;
    // int count=1,maxi=1;
    // sort(nums.begin(),nums.end());
        
    // for(int i=1;i<n;i++)
    // {
    //     if(nums[i]==nums[i-1]) continue;
    //     if(nums[i]==nums[i-1]+1)
    //     {
    //         count++;
    //         maxi = max(maxi,count);
    //     }
    //     else{               
    //         count=1;
    //     }
    // } 
    // cout<<"The longest concecutive sequence is: "<<maxi;   
}