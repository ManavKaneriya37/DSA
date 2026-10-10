#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<string> names = {"Alice", "Bob", "Charlie"};
    vector<int> heights = {168, 180, 170};

    // vector<string> names = {"Tom", "Jerry", "Spike"};
    // vector<int> heights = {160, 150, 170};

    for (int i = 0; i < heights.size() - 1; i++)
    {
        for (int j = i + 1; j < heights.size(); j++)
        {
            if (heights[j] > heights[i])
            {
                swap(heights[j], heights[i]);
                swap(names[j], names[i]);
            }
        }
    }

    for (int i = 0; i < names.size(); i++)
    {
        cout << names[i] << endl;
    }
    return 0;
}