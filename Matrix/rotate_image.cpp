#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // vector<vector<int>> mat = {
    //     {1, 2},
    //     {3, 4},
    // };

    /* OUTPUT: {
{7,4,1},
{8,5,2},
{9,6,3}
} */

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = i + 1; j < mat[i].size(); j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }

    for (int i = 0; i < mat.size(); i++)
    {
        reverse(mat[i].begin(), mat[i].end());
    }

    for (vector<int> row : mat)
    {
        for (int x : row)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
[0][0] => [0][2]
[0][1] => [1][2]
[0][2] => [2][2]

[1][0] => [0][1]
[1][1] => [1][1]
[1][2] => [2][1]

[2][0] => [0][0]
[2][1] => [1][0]
[2][2] => [2][0]

/*

[1, 2]
[3, 4]

=>
[3, 1]
[4, 2]

*/