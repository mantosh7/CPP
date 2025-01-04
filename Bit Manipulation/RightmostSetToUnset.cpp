#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num = 15;
    int mask = 1;
    int c = num&(~mask);
    while(c==num)
    {
        mask = mask<<1;
        c = num&(~mask);
    }
    cout<<c;
    return 0;
}