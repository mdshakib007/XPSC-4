#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;
        ll a[n], b[m];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < m; i++)
            cin >> b[i];

        sort(a, a + n, greater<ll>());
        sort(b, b + m, greater<ll>());

        ll ans = 0;
        for (ll i = 0; i < min(n, m); i++)
        {
            ans += min(a[i], b[i] * h);
        }
        cout << ans << '\n';
    }
}
