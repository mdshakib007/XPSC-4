#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y;
    cin >> n >> x >> y;

    auto ok = [&](ll k)
    {
        ll sum = 0;
        sum += ((k / x) + (k / y));
        return sum >= n-1;
    };

    ll l = 0, r = 2e9, mid, ans;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid + min(x, y);
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