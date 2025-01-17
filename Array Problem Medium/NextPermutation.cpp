/*
Problem statement: A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

Example 1:
Input: nums = [1,2,3]
Output: [1,3,2]

Example 2:
Input: nums = [3,2,1]
Output: [1,2,3]
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int>nums{2,1,5,4,3,0,0};
    vector<int>nums{3,2,1};
    int n = nums.size();
    
    int breakIdx = -1, biggerIdx = -1;
    
    for(int i=n-2;i>=0;i--)
    {
        if(nums[i]<nums[i+1])
        {
            breakIdx = i;
            break;
        }
    }

    if(breakIdx==-1)
    {
        reverse(nums.begin(),nums.end());
    }

    else {
        for(int i=n-1;i>breakIdx;i--)
        {
            if(nums[i]>nums[breakIdx])
            {
                swap(nums[i],nums[breakIdx]);
                break;
            }
        }       
        reverse(nums.begin()+breakIdx+1,nums.end());
    }
       
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
}