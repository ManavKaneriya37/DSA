#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // vector<vector<int>> arr = {{1, 2}, {3, 4}, {5, 6}};

    int rows = arr.size();
    int cols = arr[0].size();

    vector<vector<int>> result(cols, vector<int>(rows));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[j][i] = arr[i][j];
        }
    }

    for (vector<int> row : result)
    {
        for (int x : row)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}