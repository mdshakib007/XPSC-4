#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    ll mx = v[n - 1];

    vector<ll> diff;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] != mx)
            diff.push_back(mx - v[i]);
    }

    ll cnt = diff[0];
    for (ll i = 1; i < diff.size(); i++)
    {
        cnt = __gcd(cnt, diff[i]);
    }

    ll ans = 0;
    for (ll i = 0; i < diff.size(); i++)
    {
        ans += diff[i] / cnt;
    }

    cout << ans << " " << cnt << '\n';
    return 0;
}