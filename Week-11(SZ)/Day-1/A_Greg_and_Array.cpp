#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> l(m), r(m), d(m);
    for (int i = 0; i < m; i++)
        cin >> l[i] >> r[i] >> d[i];

    vector<ll> diff(n + 1, 0), diffQ(m + 1, 0);
    for (int i = 0; i < k; i++)
    {
        ll x, y;
        cin >> x >> y;
        x--, y--;
        diffQ[x]++;
        diffQ[y + 1]--;
    }

    vector<ll> pref(m + 1), ans(n + 1);
    for (int i = 1; i <= m; i++)
    {
        pref[i] = pref[i - 1] + diffQ[i - 1];
    }

    for (int i = 1; i <= m; i++)
    {
        ll x = l[i - 1], y = r[i - 1], z = d[i - 1];
        x--, y--;
        diff[x] += (z * pref[i]);
        diff[y + 1] -= (z * pref[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        ans[i] = ans[i - 1] + diff[i - 1];
        cout << ans[i] + a[i - 1] << " ";
    }
    return 0;
}