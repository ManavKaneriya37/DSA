#include <bits/stdc++.h>

using namespace std;

int sumSquares(int n)
{
    int sum = 0;

    while (n > 0)
    {
        int dig = n % 10;
        sum += dig * dig;
        n = n / 10;
    }

    return sum;
}

bool isHappy(int n)
{
    unordered_set<int> seen;

    while (n != 1)
    {
        if (seen.count(n))
        {
            return false;
        }

        seen.insert(n);

        n = sumSquares(n);
    }

    return true;
}

int main()
{
    /*
    A happy number is a number defined by the following process:
    Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle that does not include 1.
    Those numbers for which this process ends in 1 are happy numbers, while those that do not end in 1 are unhappy numbers.

    Given a number n, determine whether it is a happy number.
    */

    int n = 19;

    cout << isHappy(n);

    return 0;
}