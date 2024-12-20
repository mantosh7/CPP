#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="Hello! My name is Mantosh Kumar";
    map<char,int> mpp;
    for(int i=0;i<str.length();i++)
    {
        mpp[str[i]]++;
    }
    // iterating in the map 
    for(auto it:mpp)
    {
        cout<<it.first<<"-->"<<it.second<<endl;
    }

    char ch='K';
    cout<<mpp[ch];
}