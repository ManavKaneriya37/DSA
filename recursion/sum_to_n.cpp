#include <bits/stdc++.h>

using namespace std;

int sumToN(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sumToN(n - 1);
}

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << sumToN(n);
    return 0;
}