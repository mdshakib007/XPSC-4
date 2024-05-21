#include <bits/stdc++.h>
using namespace std;

vector<int> coprime[1005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // pre-calculate coprimes
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (__gcd(i, j) == 1)
                coprime[i].push_back(j);
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        vector<int> index(1005, -1);
        for (int i = 1; i <= n; i++)
            index[a[i]] = i;

        int sum = -1;
        for (int i = 1; i <= 1000; i++)
        {
            if (index[i] == -1)
                continue;

            else if (i == 1)
                sum = max(sum, 2 * index[i]);
            else
            {
                for (int j : coprime[i])
                {
                    if (index[j] != -1)
                        sum = max(sum, index[i] + index[j]);
                }
            }
        }
        cout << sum << '\n';
    }
    return 0;
}