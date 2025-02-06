/*
PROBLEM STATEMENT: Given an array of integers nums sorted in non-decreasing order,
find the starting and ending position of a given target value. If the target is not
found in the array, return [-1, -1].

Example:
Input: nums = [5, 7, 7, 8, 8, 10], target = 8
Output: [3, 4]
Explanation:The target is 8, and it appears in the array at indices 3 and 4,
so the output is [3,4]
*/

#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> &nums, int target)
{
    int n = nums.size();
    int ans = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}

int lastOccurrence(vector<int> &nums, int target)
{
    int n = nums.size();
    int ans = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8 ;
    // int target = 7;
    int first = firstOccurrence(nums, target);
    if (first == -1)
    {
        cout << "{-1, -1}";
        return 0;
    }
    int last = lastOccurrence(nums, target);
    cout << "First Occurrence = " << first << endl;
    cout << "Last Occurrence = " << last;
}