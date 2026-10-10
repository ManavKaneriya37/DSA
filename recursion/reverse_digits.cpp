#include <bits/stdc++.h>
using namespace std;

int reverse_digits(int n, int rev = 0)
{
    if (n == 0)
    {
        return rev;
    }

    rev = rev * 10 + (n % 10);
    return reverse_digits(n / 10, rev); 

}

int main()
{

    int n;

    cout << "Enter value of n: ";
    cin >> n;

    cout << reverse_digits(n);

    return 0;
}