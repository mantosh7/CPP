#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    int count = (int)(log10(num)+1);
    cout<<count;
    return 0;
}