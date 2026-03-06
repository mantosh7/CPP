#include <bits/stdc++.h>
using namespace std;

/*
Function: findLps

Purpose:
Pattern string ke liye LPS (Longest Prefix Suffix) array build karta hai.

LPS[i] = longest proper prefix jo suffix bhi ho substring pat[0..i] ke liye.

Example:
pat = "abab"

index : 0 1 2 3
char  : a b a b
lps   : 0 0 1 2
*/

void findLps(string &s, vector<int>& lps) {

    int n = s.size();

    // first index ka LPS always 0 hota hai
    lps[0] = 0;

    // pre -> current prefix length
    // suf -> current index jiske liye LPS calculate karna hai
    int pre = 0;
    int suf = 1;

    // jab tak string khatam nahi hoti
    while(suf < n)
    {
        // case 1 : characters match ho gaye
        if(s[pre] == s[suf])
        {
            // prefix length increase ho gayi
            lps[suf] = pre + 1;

            // prefix pointer aage badhao
            pre++;

            // next index par jao
            suf++;
        }

        // case 2 : characters match nahi hue
        else
        {
            // agar prefix already 0 hai
            if(pre == 0)
            {
                // to LPS bhi 0 hoga
                lps[suf] = 0;

                // next index check karo
                suf++;
            }
            else
            {
                /*
                prefix ko piche jump kara dete hain
                using previous LPS value

                Ye KMP ka most important step hai
                jo time complexity ko O(n) rakhta hai
                */
                pre = lps[pre - 1];
            }
        }
    }
}



/*
Function: search

Purpose:
Text ke andar pattern ke sabhi occurrences find karta hai.

Algorithm:
KMP (Knuth Morris Pratt)

Return:
pattern ke starting indices jaha jaha match mila.
*/

vector<int> search(string &pat, string &txt) {

    int n = txt.size();
    int m = pat.size();

    // LPS array pattern ke liye banega
    vector<int> lps(m);

    // LPS calculate karo
    findLps(pat, lps);

    // answer store karne ke liye
    vector<int> ans;

    // i -> pointer for text
    // j -> pointer for pattern
    int i = 0, j = 0;

    while(i < n && j < m)
    {
        // case 1 : characters match
        if(txt[i] == pat[j])
        {
            i++;
            j++;

            // agar pura pattern match ho gaya
            if(j == m)
            {
                /*
                match mila

                starting index = i - m
                */
                ans.push_back(i - m);

                // pattern ko reset karo using LPS
                // taaki overlapping matches bhi mil sake
                j = lps[j - 1];
            }
        }

        // case 2 : mismatch
        else
        {
            // agar pattern start par hai
            if(j == 0)
                i++;   // text pointer aage badhao

            else
            {
                /*
                pattern ko piche jump kara dete hain
                using LPS

                isse repeated comparisons avoid hote hain
                */
                j = lps[j - 1];
            }
        }
    }
    return ans ;
}

int main()
{
    string txt = "ababcabcabababd";
    string pat = "ababd";

    vector<int> ans = search(pat, txt);

    for(int x : ans)
        cout << x << " ";

    return 0;
}