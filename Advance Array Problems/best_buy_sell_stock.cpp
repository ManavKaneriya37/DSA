#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {7, 1, 3, 2, 6, 4};
    // vector<int> arr = {7, 6, 4, 3, 1};

    int min = arr[0];
    int max_profit = 0;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        int current_profit = arr[i] - min;
        max_profit = max(current_profit, max_profit);
    }

    cout << max_profit;

    return 0;
}