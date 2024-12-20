#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int nums[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int nums[] = {3,0,1};
    int size = sizeof(nums) / sizeof(nums[0]);
    // Optimal Code
    int XOR1 = 0;
    int XOR2 = 0;
    for (int i = 0; i < size; i++)
    {
        XOR1 = XOR1 ^ (i+1);
        XOR2 = XOR2 ^ nums[i];
    }
    int ans = XOR1^XOR2;
    cout << ans;

    //  Better Solution
    // int size = sizeof(nums) / sizeof(nums[0]);
    // vector<int> hash(size + 1, 0);
    // for (int i = 0; i < size; i++)
    // {
    //     hash[nums[i]] = 1;
    // }
    // for (int i = 0; i < size + 1; i++)
    // {
    //     if (hash[i] == 0)
    //     {
    //         cout << i;
    //         break;
    //     }
    // }
    
    return 0;
}