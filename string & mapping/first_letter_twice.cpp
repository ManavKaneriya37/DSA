#include <bits/stdc++.h>

using namespace std;

int main()
{

    // string s = "abccbaacz";
    string s = "abcddcba";

    unordered_map<char, int> ump;

    for (char ch : s)
    {
        if (ump.count(ch))
        {
            cout << ch << endl;
            return 1;
        }
    }

    cout << false;
    return 0;
}
