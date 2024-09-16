#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    ll x, y, d;
    cin >> x >> y >> d;

    ll a, b;
    if (x % d == 0)
        a = x / d;
    else
        a = x / d + 1;

    if (y % d == 0)
        b = y / d;
    else
        b = y / d + 1;

    ll res = 2 * max(a, b);
    if (a > b)
        res--;

    cout << res << '\n';
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