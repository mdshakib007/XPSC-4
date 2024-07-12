#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    if (n == 1)
    {
        if (k == 1)
            cout << 0 << '\n';
        else
            cout << 1 << '\n';
    }
    else
    {
        for (ll i = 2; i <= n; i++)
        {
            ll x = (i * (i + 1)) / 2;
            if ((n - i) == (x - k))
            {
                cout << (x - k) << '\n';
                return 0;
            }
        }
    }
    return 0;
}