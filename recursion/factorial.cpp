#include <bits/stdc++.h>
using namespace std;

int find_factorial(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return n * find_factorial(n - 1);
}

int main()
{

    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << find_factorial(n);
    return 0;
}