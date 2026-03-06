#include <bits/stdc++.h>
using namespace std;

/*
Function: getLPSLength
Purpose:
String ka LPS array build karta hai aur last value return karta hai.
Last value ka matlab hota hai -> longest prefix jo suffix bhi hai.

Example:
s = "ddbbbbcddd"
prefix = "dd"
suffix = "dd"
length = 2
*/

int getLPSLength(string &s) {

    int n = s.size();

    // lps[i] store karega longest prefix-suffix length for substring [0..i]
    vector<int> lps(n);

    // first index ka lps always 0 hota hai
    lps[0] = 0;

    // pre = length of current matching prefix
    int pre = 0;

    // suf = current index jiske liye LPS calculate karna hai
    int suf = 1;

    while (suf < n) {

        // Case 1: characters match
        if (s[pre] == s[suf]) {

            // prefix extend ho gaya
            lps[suf] = pre + 1;

            // prefix pointer aage badhao
            pre++;

            // next character check karne ke liye move
            suf++;
        }

        // Case 2: characters match nahi hue
        else {

            // agar prefix already 0 hai
            // to is position ka LPS bhi 0 hoga
            if (pre == 0) {

                lps[suf] = 0;

                // next index par move
                suf++;
            }

            // agar prefix 0 nahi hai
            // to prefix ko piche jump karte hain
            else {

                // important step of KMP
                // prefix ko previous LPS se reduce karte hain
                pre = lps[pre - 1];
            }
        }
    }

    // last index ka LPS hi answer hota hai
    return lps[n - 1];
}

int main() {

    string s;

    // input string le lo
    cin >> s;

    // function call
    int result = getLPSLength(s);

    // result print karo
    cout << result << endl;

    return 0;
}