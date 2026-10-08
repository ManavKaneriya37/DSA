#include <bits/stdc++.h>

using namespace std;

int main()
{

    string name = "Good morning everyone!";

    map<char, int> mp;

    for (char ch : name)
    {
        if (ch == ' ')
            continue;
            
        if (!mp.contains(ch))
        {
            mp[ch] = 1;
        }
        else
        {
            ++mp[ch];
        }
    }

    for (auto pair : mp)
    {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}