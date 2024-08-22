#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
    }

    map<ll, ll> freq;
    ll mad = 0;
    for (ll i = 0; i < n; i++)
    {
        freq[a[i]]++;
        if (freq[a[i]] >= 2)
            mad = max(mad, a[i]);
        a[i] = mad;
    }

    freq.clear();
    for (ll i : a)
        freq[i]++;

    ll prev = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += a[i];
        if (freq[a[i]] > 1)
        {
            ans += (n - i - 1) * a[i];
            prev = a[i];
        }
        else
            ans += (n - i - 1) * prev;
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
        CASES();
    }
    return 0;
}