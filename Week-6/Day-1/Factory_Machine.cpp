#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    auto ok = [&](ll k)
    {
        ll m = 0;
        for (int i = 0; i < n; i++)
        {
            m += (k / a[i]);
            if (m >= t)
            {
                return true;
            }
        }
        return false;
    };

    ll l = 0, r = 1e18, mid, ans;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    
    return 0;
}