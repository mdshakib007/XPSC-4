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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end(), greater<ll>());
        // for(ll I : a) cout << I << " ";
        // cout << endl;

        vector<pair<ll, ll>> freq;
        for (ll i = 0; i < n;)
        {
            ll j = i;
            while (i < n && a[i] == a[j])
                i++;
            freq.push_back({a[j], i - j});
        }

        ll ans = freq[0].second;
        for (ll i = 1; i < freq.size(); i++)
        {
            if (freq[i].first + 1 == freq[i - 1].first)
                ans += max(freq[i].second - freq[i - 1].second, 0ll);
            else
                ans += freq[i].second;
        }
        cout << ans << '\n';
    }
    return 0;
}