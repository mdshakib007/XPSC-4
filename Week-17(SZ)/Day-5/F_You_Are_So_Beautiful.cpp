#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> freq, first, last;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (freq[a[i]] == 0)
        {
            freq[a[i]]++;
            first[a[i]] = i;
            last[a[i]] = i;
        }
        else
        {
            last[a[i]] = i;
        }
    }

    ll ans = 0, x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (first[a[i]] == i)
            x++;
        if (last[a[i]] == i)
            ans += x;
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