#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Dutch's National Flag Algorithm (Three-way partitioning)

    vector<int> colors = {2, 0, 2, 1, 1, 0};
    // vector<int> colors = {2, 0, 1};
    // vector<int> colors = {1, 0, 2};

    int low = 0, high = colors.size() - 1;
    int mid = 0;

    while (mid <= high)
    {
        if (colors[mid] == 0)
        {
            swap(colors[low++], colors[mid++]);
        }
        else if (colors[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(colors[mid], colors[high--]);
        }
    }

    for (int el : colors)
    {
        cout << el << " ";
    }

    return 0;
}