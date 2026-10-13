#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> arr = {0, 2, 1, 0, 3, 1, 0, 1, 2, 1, 2, 1};

    // vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    // left = {0,1,1,2,2,2,2,3,3,3,3,3}
    // right = {3,3,3,3,3,3,3,3,2,2,2,1}

    // vector<int> arr = {1, 2, 1};
    vector<int> arr = {4, 2, 3};

    int res = 0;

    int max_left = arr[0], max_right = arr[arr.size() - 1];
    vector<int> left(arr.size());
    vector<int> right(arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        max_left = max(max_left, arr[i]);
        left[i] = max_left;
    }

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        max_right = max(max_right, arr[i]);
        right[i] = max_right;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        res += min(left[i], right[i]) - arr[i];
    }

    cout << endl
         << res;

    return 0;
}