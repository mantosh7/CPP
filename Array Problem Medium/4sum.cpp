/*
PROBLEM STATEMENT: Given an array nums of n integers, return an array of all the unique 
quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

Example 1:
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

Example 2:
Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> nums{1,0,-1,0,-2,2};
    // int target = 0;
    vector<int> nums{2,2,2,2,2};
    int target = 8;
    int n = nums.size();

    // OPTIMAL APPROACH
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());  // sorting the given array

    for(int i=0;i<n;i++)
    {
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1;j<n;j++)
        {
            if(j!=i+1 && nums[j]==nums[j-1]) continue;
            int k = j+1;
            int l = n-1;
            while(k<l)
            {
                int sum = nums[i]+nums[j]+nums[k]+nums[l];
                if(sum==target)
                {
                    vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l && nums[k]==nums[k-1]) k++;
                    while(k<l && nums[l]==nums[l+1]) l--;
                }
                else if(sum<target) k++;
                else l--;
            }
        }
    }

    // printing all the quadruplets
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[0].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


//------------------------------------------------------------------------------------------------------------------    

    // BETTER APPROACH
    // set<vector<int>> st;  // for storing unique triplets

    // for(int i=0;i<n;i++)
    // {        
    //     for(int j=i+1;j<n;j++)
    //     {
    //         unordered_set<int> hashset;
    //         for(int k=j+1;k<n;k++)
    //         {
    //             int sum = target-(nums[i]+nums[j]+nums[k]);
    //             if(hashset.find(sum) != hashset.end())
    //             {
    //                 vector<int> temp = {nums[i],nums[j],nums[k],sum}; // for storing all three elements that form triplets
    //                 sort(temp.begin(),temp.end()); // sorting to avoid duplicacy
    //                 st.insert(temp); // inserting in set to avoid duplicate triplets
    //             }
    //             hashset.insert(nums[k]);
    //         }
            
    //     }
    // }
    // // Printing quadruplets
    // if(st.empty()) cout<<"No quadruplet";
    // else {
    //     for(auto it:st)
    //     {
    //         for(auto x:it)
    //         {
    //             cout<<x<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
}