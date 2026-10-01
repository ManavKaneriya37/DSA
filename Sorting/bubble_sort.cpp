#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Bubble sort O(n^2)
    vector<int> v = {9, 5, 1, 6, 0, 2, 4};

    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    for (int x : v)
    { 
        cout << x << " ";
    }
    return 0;
}