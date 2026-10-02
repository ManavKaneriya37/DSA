#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &v)
{
    // Insertion Sort O(log n)
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        int key = v[i];
        int j = i - 1;

        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            --j;
        }

        v[j + 1] = key;
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

    vector<vector<int>> test_cases =
        {{25, 4, 7, 1, 3, 18, 11},
         {1, 2, 3, 4, 5},
         {5, 4, 3, 2, 1},
         {1, 2, 3, 5, 4},
         {5, 2, 2, 1, 5},
         {5, 5, 5, 5},
         {10},
         {},
         {-5, 3, -1, 8, -10, 0},
         {5, -2, 0, 8, -7, 3},
         {1, 100, 2, 99, 3, 98},
         {10, 20, 30, 40, 1},
         {100, 2, 3, 4, 5},
         {3, 1, 3, 2, 1, 3, 2, 1},
         {5, 1, 4, 2, 3}};

    for (int i = 0; i < test_cases.size(); i++)
    {
        cout << "Test Case: " << i + 1 << ": ";

        insertion_sort(test_cases[i]);
        print_array(test_cases[i]);
    }

    return 0;
}