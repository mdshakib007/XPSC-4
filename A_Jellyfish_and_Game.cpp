#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (k % 2 == 0)
    {
        if (a.front() < b.back())
        {
            swap(a.front(), b.back());
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
        }
        if (b.front() < a.back())
        {
            swap(a.back(), b.front());
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
        }
    }
    else
    {
        if (a.front() < b.back())
        {
            swap(a.front(), b.back());
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
        }
    }

    ll ans = 0;
    for (int v : a)
        ans += v;
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
        CASES();
    }
    return 0;
}