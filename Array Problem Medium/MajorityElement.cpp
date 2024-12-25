#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums;
    nums = {2,2,1,1,1,2,2};
    // nums = {3,2,3};
    int n = nums.size();

    // Optimal Solution
    int el;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            el = nums[i];
            count++;
        }
        else if(nums[i]==el) count++;
        else count--;
    }
    cout<<"Majority Element:"<<el;

    // Better Solution
    // map<int,int>mp;
    // for(int i=0;i<n;i++)
    // {
    //     if(mp.find(nums[i])!=mp.end())
    //     {
    //         mp[nums[i]]++ ;
    //     }

    //     else mp[nums[i]] = 1;
    // }

    // for(pair<int,int>it:mp)
    // {
    //     if(it.second>n/2)
    //     {
    //         cout<<it.first;
    //     }
    // }

    return 0;
}