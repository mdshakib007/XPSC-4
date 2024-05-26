#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a;

        while (n > 0)
        {
            a.push_back((n + 1) / 2);
            n /= 2;
        }

        int sum = 0, pow = 1;
        for (int i : a)
        {
            if (sum < k && k <= sum + i)
            {
                cout << pow * (2 * (k - sum) - 1) << '\n';
                break;
            }

            sum += i;
            pow *= 2;
        }
    }
    return 0;
}