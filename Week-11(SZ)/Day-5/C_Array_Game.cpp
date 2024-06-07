#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        if (k >= 3)
        {
            cout << 0 << '\n';
            continue;
        }

        sort(a.begin(), a.end());
        ll x = a[0];
        for (ll i = 0; i < n - 1; i++)
            x = min(x, abs(a[i] - a[i + 1]));

        if (k == 1)
        {
            cout << x << '\n';
            continue;
        }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < i; j++)
            {
                ll y = abs(a[i] - a[j]);
                ll p = lower_bound(a.begin(), a.end(), y) - a.begin();

                if (p < n)
                    x = min(x, abs(a[p] - y));
                if (p > 0)
                    x = min(x, abs(a[p - 1] - y));
            }
        }
        cout << x << '\n';
    }
    return 0;
}