#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="My name is Mantosh Kumar Roy";
    int hash[256]={0};
    for(int i=0;i<26;i++)
    {
        hash[s[i]]++;
    }
    
    // char ch='a';
    // char ch='m';
    char ch = 'M';
    cout<<hash[ch];
}