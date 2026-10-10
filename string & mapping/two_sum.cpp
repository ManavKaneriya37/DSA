#include <bits/stdc++.h>

using namespace std;

vector<int> two_sum(vector<int> &arr, int target)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return {i, j};
            }
        }
    }

    return {};
}

int main()
{

    vector<int> arr = {2, 7, 11, 15};
    // vector<int> arr = {1, 1, 1, 1};
    int target = 2;

    vector<int> ans = two_sum(arr, target);

    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}