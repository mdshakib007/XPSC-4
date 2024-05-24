#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> a(k + 1), b(k + 1);
        a[0] = 0, b[0] = 0;
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        for (int i = 1; i <= k; i++)
            cin >> b[i];

        ll ans = 0;
        while (q--)
        {
            ll d;
            cin >> d;
            ll idx = upper_bound(a.begin(), a.end(), d) - a.begin();
            idx--;

            if (a[idx] == d)
            {
                cout << b[idx] << ' ';
                continue;
            }

            ll ans = (((d - a[idx]) * (b[idx + 1] - b[idx])) / (a[idx + 1] - a[idx])) + b[idx];
            cout << ans << ' ';
        }
        cout << '\n';
    }
    return 0;
}