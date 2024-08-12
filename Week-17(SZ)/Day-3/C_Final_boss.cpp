#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll h, n;
    cin >> h >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
        cin >> b[i];

    set<pair<ll, ll>> st;
    for (ll i = 0; i < n; i++)
        st.insert({1, i});

    ll last = 1;
    while (h > 0)
    {
        auto [curr, i] = *st.begin();
        st.erase(st.begin());

        last = curr;
        h -= a[i];
        st.insert({curr + b[i], i});
    }
    cout << last << '\n';
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