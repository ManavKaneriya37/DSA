#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    You are given two strings jewels and stones. Each character in jewels represents a type of jewel, and each character in stones represents a stone you have. You need to count how many stones are also jewels.
Note: Letters are case-sensitive, so ‘a’ is different from ‘A’.
    */

    // string jewels = "aA";
    // string stones = "aAAbbbb";

    string jewels = "ABC";
    string stones = "abcABCabcABC";    

    int jewels_in_stones = 0;

    cout<<string::npos<<endl;

    for (char ch : stones)
    {
        
        if (jewels.find(ch) != string::npos)
        {
            ++jewels_in_stones;
        }
    }

    cout << jewels_in_stones;

    return 0;
}