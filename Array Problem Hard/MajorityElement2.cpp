#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> nums = {2,1,1,3,1,4,5,6};
    // vector<int> nums = {3,2,3};
    vector<int> nums = {1,2};
    int n = nums.size();
    vector<int> ans;

    // OPTIMAL SOLUTION
    int el1,el2;
    int cnt1=0, cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(cnt1==0 && nums[i]!=el2)  
        {
            el1 = nums[i];
            cnt1 = 1;
        }
        else if(cnt2==0 && nums[i]!=el1)
        {
            el2 = nums[i];
            cnt2 = 1;
        }
        else if(nums[i] == el1) cnt1++;
        else if(nums[i] == el2) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }
    cnt1=0, cnt2=0;

    // checking whether el1 & el2 is majority element or not
    for(int i=0;i<n;i++)
    {
        if(nums[i]==el1) cnt1++;
        else if(nums[i]==el2) cnt2++;
    }
    if(cnt1 > (n/3)) cout<<el1<<" ";
    if(cnt2 > (n/3)) cout<<el2;

//-------------------------------------------------------------------------------------------------

    // BETTER APPROACH
    // unordered_map<int,int> mp;
    // int cnt = (int) (n/3) + 1;
    // for(int i=0;i<n;i++)
    // {
    //     mp[nums[i]]++;
    //     if(mp[nums[i]] == cnt) ans.push_back(nums[i]);
    //     if(ans.size() == 2) break;
    // }

    // // printing all the elements
    // for(int i=0;i<ans.size();i++)
    // {
    //     cout<<ans[i]<<" ";
    // }

//-----------------------------------------------------------------------------------------------

    // BRUTE FORCE
    // for(int i=0;i<n;i++)
    // {
    //     if(ans.size()==0 || ans[0]!=nums[i])
    //     {
    //         int cnt = 0;
    //         for(int j=0;j<n;j++)
    //         {
    //             if(nums[i]==nums[j]) cnt++;
    //         }

    //         if(cnt > (n/3)) ans.push_back(nums[i]);
    //     }
    //     if(ans.size() == 2) break;
    // }

    // printing all the elements
    // for(int i=0;i<ans.size();i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
}