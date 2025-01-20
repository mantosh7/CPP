/*
PROBLEM STATEMENT: Given two integer arrays nums1 and nums2, return an array of
their intersection. Each element in the result must appear as many times as it
shows in both arrays and you may return the result in any order.

Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]

Example 2:
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> nums1{1,2,2,1};
    // vector<int> nums2{2,2};

    vector<int> nums1{4,9,5};
    vector<int> nums2{9,4,9,8,4};

    unordered_map<int,int> mp;
    vector<int> v;

    for(auto it:nums1)
    {
        mp[it]++;
    }
    
    for(auto it:nums2)
    {
        if(mp[it]>0)
        {
            mp[it]--;
            v.push_back(it);
        }
    }

    cout<<"Intersection of nums1 & nums2: ";
    for(auto it:v)
    {
        cout<<it<<" ";
    }

}