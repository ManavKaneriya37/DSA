#include <bits/stdc++.h>
using namespace std;

int bruteForce(vector<int> arr)
{
    int maxSum = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        int currentSum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            currentSum += arr[j];
            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}

int kadane_algo(vector<int> arr)
{
    int maxSum = INT_MIN, currentSum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        currentSum += arr[i];

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }

        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main()
{

    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // cout << bruteForce(arr);
    cout << kadane_algo(arr);

    return 0;
}