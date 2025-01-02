#include<bits/stdc++.h>
using namespace std;
string reverse(string str)
{
    int n = str.length();
    int i = 0, j=n-1;
    while(i<j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
    return str;
}

string decimal_to_Bin(int num)
{
    string str="";
    while(num!=1)
    {
        if(num%2==1) str+="1";
        else str+="0";
        num/=2;
    }
    return str+"1";
}

int main()
{
    int num = 13;
    string binary = decimal_to_Bin(num);
    cout<<reverse(binary);
    return 0;
}

// This code is giving correct output on online compiler (even ChatGPT is giving correct output)
// int main()
// {
//     int num = 6;
//     int res = 0;
//     int i = 0;
//     while(num!=1)
//     {
//         int rem = num%2;
//         res = res+rem*pow(10,i);
//         num /= 2;
//         i++;
//     }
//     res = res+1*pow(10,i);
//     cout<<res;
//     return 0;
// }



