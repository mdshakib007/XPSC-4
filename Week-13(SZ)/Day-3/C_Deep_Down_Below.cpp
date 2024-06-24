#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> power(n);
    for (ll i = 0; i < n; i++)
    {
        ll k, maxPower = -1;
        cin >> k;
        vector<ll> armor(k);
        for (ll j = 0; j < k; j++)
        {
            cin >> armor[j];
            maxPower = max(maxPower, armor[j] - j + 1);
        }
        power[i] = {maxPower, k};
    }
    sort(power.begin(), power.end());

    ll l = power[0].first, r = power[n - 1].first;
    ll ans = 0, mid = 0, curr = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        curr = mid;

        bool possible = true;
        for (ll i = 0; i < n; i++)
        {
            if (curr >= power[i].first)
                curr += power[i].second;
            else
            {
                possible = false;
                break;
            }
        }
        if (possible)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
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