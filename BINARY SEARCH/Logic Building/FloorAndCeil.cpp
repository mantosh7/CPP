/*
PROBELM STATEMENT: Given a sorted array nums and an integer x. Find the floor 
and ceil of x in nums. The floor of x is the largest element in the array which 
is smaller than or equal to x. The ceiling of x is the smallest element in the 
array greater than or equal to x. If no floor or ceil exists, output -1.

Example:
Input : nums =[3, 4, 4, 7, 8, 10], x= 5
Output: 4 7
Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.
*/

#include<bits/stdc++.h>
using namespace std;
int foundFloor(vector<int>& nums, int x)
{
    int low = 0, high = nums.size() -1 ;
    int ans = -1 ;
    while(low <= high)
    {
        int mid = low + (high - low) / 2 ;
        if(nums[mid] <= x)
        {
            ans = nums[mid] ;
            low = mid + 1 ;
        }
        else high = mid - 1 ;
    }
    return ans;
}

int foundCeil(vector<int>& nums, int x)
{
    int low = 0, high = nums.size() -1 ;
    int ans = -1 ;
    while(low <= high)
    {
        int mid = low + (high - low) / 2 ;
        if(nums[mid] >= x)
        {
            ans = nums[mid] ;
            high = mid - 1 ;
        }
        else low = mid + 1 ;
    }
    return ans;
}


int main()
{
    vector<int> nums = {3,4,4,7,8,10};
    // int x = 8 ;
    int x = 5 ;
    int floor = foundFloor(nums, x) ;
    int ceil = foundCeil(nums, x);
    cout << "Floor = " << floor <<endl ;
    cout << "Ceil = " << ceil ;
}