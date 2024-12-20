#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "abcagcsbacija";
    // pre compute
    int hash[26]={0};
    for(int i=0;i<str.size();i++)
    {
        hash[str[i]-'a']++;
    }

    char ch='b';
    cout<<hash[ch-'a'];
}