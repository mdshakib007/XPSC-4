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
        priority_queue<ll, vector<ll>> pq;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x == 0 && !pq.empty())
            {
                ll power = pq.top();
                pq.pop();
                ans += power;
            }
            if (x > 0)
                pq.push(x);
        }
        cout << ans << '\n';
    }
    return 0;
}