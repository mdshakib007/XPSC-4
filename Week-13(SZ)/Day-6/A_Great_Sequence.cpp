#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    multiset<ll> ms(a.begin(), a.end());
    ll ans = 0;
    while (!ms.empty())
    {
        ll k = *ms.begin();
        ms.erase(ms.begin());
        
        if (ms.find(k * x) == ms.end())
            ans++;
        else
            ms.erase(ms.find(k * x));
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