#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += (a[i] / k);
        a[i] %= k;
    }

    sort(a.begin(), a.end());
    int l = 0, r = a.size() - 1;
    while (l < r)
    {
        if (a[l] + a[r] >= k)
        {
            ans++;
            r--;
        }
        l++;
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