/*
PROBLEM STATEMENT: Given an integer array nums, return all the triplets [nums[i], nums[j], 
nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

Example 1:
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]

Example 2:
Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums{-1,0,1,2,-1,-4};
    // vector<int>nums{0,1,1};
    int n = nums.size();

    // OPTIMAL SOLUTION
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());  // sorting nums

    for(int i=0;i<n;i++)
    {
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j=i+1, k=n-1;
        while(j<k)
        {
            int target = nums[i]+nums[j]+nums[k];
            if(target==0)
            {
                vector<int> temp {nums[i],nums[j],nums[k]};  // storing triplet in vector
                ans.push_back(temp); // pushing triplet vector in another vector to return
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;
            }
            else if(target<0) j++;
            else k--;
        }
    }

    // Printing Triplet
    if(ans.empty()) cout<<"No Triplet";
    else {
        for(auto it : ans)
        {
            cout<<"[";
            for(auto x : it)
            {
                cout<<x<<" ";
            }
            cout<<"]"<<endl;
        }
    }

//-------------------------------------------------------------------------------------------------
    // BETTER APPROACH
    // set<vector<int>> st;  // for storing unique triplet only

    // for(int i=0;i<n-1;i++)
    // {
    //     unordered_set<int> hashset;
    //     for(int j=i+1;j<n;j++)
    //     {
    //         int third = -(nums[i]+nums[j]);   //  third stores the remaining value to make triplet 0
    //         // searching third element int hashset
    //         if(hashset.find(third)!=hashset.end())
    //         {
    //             vector<int> temp {nums[i],nums[j],third};
    //             sort(temp.begin(),temp.end());  // sorting to avoid duplicate triplet
    //             st.insert(temp);
    //         }
    //         hashset.insert(nums[j]);
    //     }
    // }

    // // Printing all the triplets
    // if(st.empty()) cout<<"No Triplet";
    // for(auto it:st)
    // {
    //     cout<<"[";
    //     for(auto x:it)
    //     {
    //         cout<<x<<" ";
    //     }
    //     cout<<"]"<<endl;
    // }
    
}