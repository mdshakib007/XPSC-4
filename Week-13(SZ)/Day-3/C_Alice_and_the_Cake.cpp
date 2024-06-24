#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    if (n == 1)
    {
        cout << "YES\n";
        return;
    }

    map<ll, ll> freq;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        freq[a[i]]++;
        sum += a[i];
    }

    priority_queue<ll, vector<ll>> pq;
    pq.push(sum);
    bool possible = true;
    while (!pq.empty())
    {
        ll val = pq.top();
        pq.pop();

        ll x = val / 2;
        ll y = val - x;

        if (freq[x] > 0)
            freq[x]--;
        else if (x > 1)
            pq.push(x);

        if (freq[y] > 0)
            freq[y]--;
        else if (y > 1)
            pq.push(y);

        if (pq.size() > n + 2)
        {
            possible = false;
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (freq[a[i]] > 0)
        {
            possible = false;
            break;
        }
    }
    if (possible)
        cout << "YES\n";
    else
        cout << "NO\n";
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