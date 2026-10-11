#include <bits/stdc++.h>
using namespace std;

int arr_gcd(vector<int> arr)
{
    int min_val = *min_element(arr.begin(), arr.end());
    int max_val = *max_element(arr.begin(), arr.end());

    for (int i = min(min_val, max_val); i >= 1; i--)
    {
        if (min_val % i == 0 && max_val % i == 0)
        {
            return i;
        }
    }

    return 0;
}

int main()
{
    // vector<int> arr = {12, 15, 21, 30};
    vector<int> arr = {5, 10, 15, 20, 25};

    cout << arr_gcd(arr);

    return 0;
}