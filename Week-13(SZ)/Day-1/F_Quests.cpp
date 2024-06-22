#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool possible(vector<ll> &a, ll n, ll c, ll d, ll k)
{
    if (k == 0)
        return (a[0] * d >= c);

    ll sum = 0, income = 0;
    if (k >= n)
    {
        for (int i = 0; i < n; i++)
            sum += a[i];
    }
    else
    {
        for (int i = 0; i < k; i++)
            sum += a[i];
    }

    ll times = d / k, rem = d % k;
    income = times * sum;

    if (rem >= n)
    {
        for (int i = 0; i < n; i++)
            income += a[i];
    }
    else
    {
        for (int i = 0; i < rem; i++)
            income += a[i];
    }
    return (income >= c);
}

void solve()
{
    ll n, c, d;
    cin >> n >> c >> d;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.rbegin(), a.rend());
    ll total = 0;
    for (int i = 0; i < min(n, d); i++)
        total += a[i];
    if (total >= c)
    {
        cout << "Infinity\n";
        return;
    }

    ll ans = -1, l = 0, r = 1e12, mid = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (possible(a, n, c, d, mid + 1))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if (ans == -1)
        cout << "Impossible\n";
    else
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