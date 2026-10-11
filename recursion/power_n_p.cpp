// #include <bits/stdc++.h>
// using namespace std;

// float calc_power(float n, int p)
// {
//     float ans = n;
//     for (int i = 1; i < p; i++)
//     {
//         ans = ans * n;
//     }

//     return ans;
// }

// float get_power(float n, int p) {

// }

// int main()
// {

//     float n;
//     int p;

//     cout << "Enter value of n: ";
//     cin >> n;

//     cout << "Enter value of p: ";
//     cin >> p;

//     cout << get_power(n, p);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double power(double n, long long p)
    {
        // O(n log n)

        double result = 1.0;

        long long exp = abs(p);

        while (exp > 0)
        {
            if (exp % 2 == 1)
            {
                result *= n;
            }
            n *= n;
            exp /= 2;
        }

        // handle negative power
        if (p < 0)
            return 1.0 / result;

        return result;
    }

    double recursive_power(double n, int p)
    {
        if (p == 1)
            return 1;

        if (p < 0)
            return 1 / this->recursive_power(n, -p);

        if (p % 2 == 0)
        {
            double half = this->recursive_power(n, p / 2);
            return half * half;
        }
        else
        {
            return n * this->recursive_power(n, p - 1);
        }
    }
};

int main()
{

    Solution s1 = Solution();
    // double ans = s1.power(2, 3);
    // cout<<ans;

    double ans = s1.power(2, 4);
    cout << ans << endl;

    double ans2 = s1.power(3, 3);
    cout << ans2;

    return 0;
}