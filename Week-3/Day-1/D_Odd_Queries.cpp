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
        ll n, q;
        cin >> n >> q;
        ll a[n], pre[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0)
                pre[i] = a[i];
            else
                pre[i] = pre[i - 1] + a[i];
        }

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll x = (r - l + 1) * k;
            ll s;
            if (l == 1)
                s = pre[n - 1] - pre[r - 1];
            else
                s = pre[n - 1] - (pre[r - 1] - pre[l - 2]);

            ll ans = s + x;
            if (ans % 2 == 0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}