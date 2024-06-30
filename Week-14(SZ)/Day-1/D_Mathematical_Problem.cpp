#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 2)
    {
        cout << stoi(s) << '\n';
        return;
    }

    if (n > 2)
    {
        if (n > 3)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    cout << 0 << '\n';
                    return;
                }
            }
        }
        if (s[0] == '0' || s[n - 1] == '0')
        {
            cout << 0 << '\n';
            return;
        }
    }

    int ans = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        int sum = stoi(s.substr(i, 2));
        for (int j = i - 1; j >= 0; j--)
        {
            if (sum == 1)
                sum *= (s[j] - '0');
            else if ((s[j] - '0') > 1)
                sum += (s[j] - '0');
        }

        for (int j = i + 2; j < n; j++)
        {
            if (sum == 1)
                sum *= (s[j] - '0');
            else if ((s[j] - '0') > 1)
                sum += (s[j] - '0');
        }
        ans = min(ans, sum);
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}