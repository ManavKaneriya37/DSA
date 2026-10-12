#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> arr = {0, 1, 0, 1, 1};
    vector<int> arr = {1, 0, 1, 0, 1, 0};

    int i = 0, j = arr.size() - 1;

    while (i < j)
    {
        if (arr[i] == 0 && arr[j] == 1)
        {
            swap(arr[i], arr[j]);
        }

        if (arr[i] == 1)
        {
            ++i;
        }

        if (arr[j] == 0)
        {
            --j;
        }
    }

    for (int el : arr)
    {
        cout << el << " ";
    }

    return 0;
}