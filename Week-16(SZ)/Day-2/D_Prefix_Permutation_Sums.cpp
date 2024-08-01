#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n - 1; i++)
        cin >> a[i];

    ll total = (n * (n + 1ll)) / 2ll;
    if (a[n - 2] > total)
    {
        cout << "NO\n";
        return;
    }

    if (a[n - 2] != total)
    {
        a[n - 1] = total;
        vector<ll> b;
        for (ll i = n - 2; i >= 0; i--)
            b.push_back(a[i + 1] - a[i]);

        b.push_back(a[0]);

        bool possible = true;
        vector<bool> vis(n + 1, false);
        for (ll i = 0; i < n; i++)
        {
            if (b[i] > n || vis[b[i]])
            {
                possible = false;
                break;
            }
            vis[b[i]] = true;
        }

        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
        return;
    }

    vector<ll> b;
    vector<bool> vis(n + 1, false);
    for (ll i = 0; i < n - 1; i++)
    {
        if (i == 0)
        {
            b.push_back(a[i]);
            if (a[i] <= n)
                vis[a[i]] = true;
        }
        else
        {
            ll x = a[i] - a[i - 1];
            b.push_back(x);
            if (x <= n)
                vis[x] = true;
        }
    }

    vector<ll> missing;
    for (ll i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            missing.push_back(i);
        }
    }

    if (missing.size() != 2)
    {
        cout << "NO\n";
        return;
    }

    bool possible = false;
    for (ll i : b)
    {
        if (missing[0] + missing[1] == i)
        {
            possible = true;
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
        CASES();
    }
    return 0;
}