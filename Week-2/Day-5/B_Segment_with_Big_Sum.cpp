#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, r = 0, sum = 0, ans = LLONG_MAX;
    while (r < n)
    {
        sum += a[r];
        if (sum >= s)
        {
            ans = min(ans, (r - l + 1));
            while (sum > s && l < r)
            {
                sum -= a[l];
                l++;
                if (sum >= s)
                    ans = min(ans, (r - l + 1));
            }
        }
        r++;
    }
    if (ans == LLONG_MAX)
        cout << -1 << '\n';
    else
        cout << ans << '\n';
    return 0;
}