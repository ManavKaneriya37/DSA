#include <bits/stdc++.h>
using namespace std;

int normal_gdc(int n1, int n2)
{
    // O(min(n1, n2))
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            return i;
        }
    }
}

int euclidean_gcd(int n1, int n2)
{
    // O (max(n1, n2))
    if (n1 == n2)
        return n1;

    if (n1 > n2)
        return euclidean_gcd(n1 - n2, n2);
    else
        return euclidean_gcd(n1, n2 - n1);
}

int euclidean_gcd_v2(int n1, int n2)
{
    if (n2 == 0)
        return n1;

    return euclidean_gcd(n2, n1 % n2);
}
int main()
{
    int n1, n2, ans;
    cout << "Enter first number: ";
    cin >> n1;

    cout << "\nEnter second number: ";
    cin >> n2;

    // ans = normal_gdc(n1, n2);
    // ans = euclidean_gcd(n1, n2);
    ans = euclidean_gcd_v2(n1, n2);

    cout << ans;

    return 0;
}