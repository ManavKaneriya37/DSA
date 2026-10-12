#include <bits/stdc++.h>
using namespace std;

int find_majority(vector<int> arr)
{
    // Boyer Moore's Voting Algorithm

    int count = 1, state = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (count == 0)
        {
            state = arr[i];
            count = 1;
        }
        else if (state != arr[i])
        {
            --count;
        }
        else
        {
            ++count;
        }
    }

    return state;
}

int main()
{

    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    // vector<int> arr = {3, 1, 3};
    // vector<int> arr = {2, 1, 3};

    cout << find_majority(arr);

    return 0;
}