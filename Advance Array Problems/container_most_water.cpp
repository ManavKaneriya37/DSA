#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    vector<int> arr = {1, 1};

    int ans = 0, i = 0, j = arr.size() - 1;

    while (i < j)
    {
        ans = max(ans, min(arr[i], arr[j]) * (j - i));

        if (arr[i] < arr[j])
        {
            ++i;
        }
        else
        {
            --j;
        }
    }

    cout << ans;

    return 0;
}