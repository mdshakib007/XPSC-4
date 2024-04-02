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
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll l = 0, r = 0, ans = 0, changes = 0;
        bool flag = false;
        while (r < n)
        {
            ans += abs(a[r]);

            if (a[r] < 0 && !flag)
            {
                flag = true;
                changes++;
            }

            if (a[r] > 0)
            {
                flag = false;
                while (a[l] <= 0 && l < r)
                {
                    l++;
                }
            }
            r++;
        }
        cout << ans << " " << changes << "\n";
    }
    return 0;
}