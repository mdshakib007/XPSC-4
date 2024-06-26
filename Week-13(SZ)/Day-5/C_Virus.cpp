#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m);
    for (ll i = 0; i < m; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    vector<ll> gaps;
    if (m == 1)
        gaps.push_back(n - 1);
    else
    {
        gaps.push_back((n - a[m - 1]) + (a[0] - 1));
        for (ll i = 1; i < m; i++)
            gaps.push_back((a[i] - a[i - 1] - 1));
    }
    sort(gaps.rbegin(), gaps.rend());

    ll safe = 0, spread = 0;
    for (ll i = 0; i < gaps.size(); i++)
    {
        ll take = gaps[i] - spread;
        if (take < 1)
            break;

        if (take == 1)
            safe++, spread += 2;
        else if (take > 1)
        {
            safe++, spread += 2;
            take -= 2;
            if (take == 1)
                safe++, spread += 2;
            else if (take > 1)
                safe += take, spread += 2;
        }
    }
    cout << n - safe << '\n';
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