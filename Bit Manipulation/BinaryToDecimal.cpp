#include<bits/stdc++.h>
using namespace std;

int main()
{
    int bin = 11010;
    int decimal=0;
    int i=0;

    while(bin!=0)
    {
        int rem = bin%10;
        decimal += rem*pow(2,i);
        bin/=10;
        i++;
    }

    cout<<decimal;
    return 0;
}