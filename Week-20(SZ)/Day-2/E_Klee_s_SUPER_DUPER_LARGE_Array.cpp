#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    ll n, k;
    cin >> n >> k;

    auto ok = [&](ll b, ll e)
    {
        return 1ll * (b + e) * (e - b + 1) / 2;
    };

    ll l = k, r = k + n - 1;
    while (l < r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(k, mid) < ok(mid + 1, k + n - 1))
            l = mid + 1;
        else
            r = mid;
    }

    cout << min(abs(ok(k, l) - ok(l + 1, n + k - 1)), abs(ok(k, l - 1) - ok(l, k + n - 1))) << '\n';
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