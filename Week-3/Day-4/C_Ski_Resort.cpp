#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > q)
                a[i] = 0;
            else
                a[i] = 1;
        }
        ll ans = 0, sz = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                sz++;
            }
            else
            {
                if (sz >= k)
                {
                    ans += ((sz - k + 1) * (sz - k + 2)) / 2;
                }
                sz = 0;
            }
        }
        if (sz >= k)
        {
            ans += ((sz - k + 1) * (sz - k + 2)) / 2;
        }

        cout << ans << endl;
    }
    return 0;
}
