#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 1E5 + 5;
ll a[N], t[4 * N];

void build(ll n, ll b, ll e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }

    ll mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = __gcd(t[l], t[r]);
}

ll query(ll n, ll b, ll e, ll i, ll j)
{
    if (j < b || e < i)
        return 0;  
    if (i <= b && e <= j)
        return t[n];
    ll mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return __gcd(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

void CASES()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];

    build(1, 1, n);

    ll min_len = n + 1;
    bool found = false;

    for (ll i = 1; i <= n; i++)
    {
        ll l = i, r = n, ans = -1;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (query(1, 1, n, i, mid) == 1)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (ans != -1)
        {
            min_len = min(min_len, ans - i + 1);
            found = true;
        }
    }

    if (found)
        cout << min_len << '\n';
    else
        cout << -1 << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Uncomment this if there are multiple test cases
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    CASES();
    // }
    return 0;
}
