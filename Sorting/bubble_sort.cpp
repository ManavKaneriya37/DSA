#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &v)
{
    // Insertion Sort O(n^2)
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

void print_array(const vector<int> &v)
{
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> test_cases = {
        {25, 4, 7, 1, 3, 18, 11},
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {1, 2, 3, 5, 4},
        {5, 2, 2, 1, 5},
        {5, 5, 5, 5},
        {10},
        {},
        {-5, 3, -1, 8, -10, 0},
        {1, 100, 2, 99, 3, 98}};

    for (int i = 0; i < test_cases.size(); i++)
    {
        cout << "Test Case " << i + 1 << ": ";

        bubble_sort(test_cases[i]);
        print_array(test_cases[i]);
    }

    return 0;
}