#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
    // vector<int>nums{1};
    // vector<int>nums{5,4,-1,7,8};
    int n = nums.size();

    int maxi = nums[0];
    int sum = 0;

    for(int i=0;i<n;i++)
    {
        sum += nums[i];
        if(sum > maxi) maxi = sum;
        if(sum < 0) sum=0;
    }

    cout<<maxi;
    return 0;


    // Better Approach
    // int maxi = INT_MIN;
    // int sum = 0;

    // for(int i=0;i<n;i++)
    // {
    //     sum = 0;
    //     for(int j=i;j<n;j++)
    //     {
    //         sum+=nums[j];
    //     }
    //     maxi = max(maxi,sum);
    // }
    // cout<<maxi;
    // return 0;
}