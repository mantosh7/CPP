/*
Write a function that reverses a string. The input string is given as an array
of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> s{'H','a','n','n','a','h'};
    int n = s.size();

    for(int i=0,j=n-1;i<j;i++,j--)
    {
        swap(s[i],s[j]);
    }

    cout<<"Reversed String: ";
    for(auto it:s)
    {
        cout<<it<<" ";
    }
}