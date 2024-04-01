#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> a, b, c;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back({x, i});
        }
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            b.push_back({x, i});
        }
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            c.push_back({x, i});
        }

        sort(a.begin(), a.end(), greater<>());
        sort(b.begin(), b.end(), greater<>());
        sort(c.begin(), c.end(), greater<>());

        ll ans = 0;
        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                for (ll k = 0; k < 3; k++)
                {
                    if (a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second)
                    {
                        ans = max(a[i].first + b[j].first + c[k].first, ans);
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}