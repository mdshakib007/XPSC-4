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
        ll y, x;
        cin >> y >> x;

        ll ans = 0;
        if (y >= x)
        {
            ll tmp = ((1 + 2 * (y - 1)) / 2) + 1;
            if (tmp >= x)
            {
                ans = (y * (y - 1)) + 1;
                if (y % 2 == 0)
                    ans += (tmp - x);
                else
                    ans -= (tmp - x);
            }
            else
            {
                ans = (x * (x - 1)) + 1;
                if (x % 2 == 0)
                    ans += (x - y);
                else
                    ans -= (x - y);
            }
        }
        else
        {
            ll tmp = ((1 + 2 * (x - 1)) / 2) + 1;
            if (tmp >= y)
            {
                ans = (x * (x - 1)) + 1;
                if (x % 2 == 0)
                    ans -= (tmp - y);
                else
                    ans += (tmp - y);
            }
            else
            {
                ans = (y * (y - 1)) + 1;
                if (y % 2 == 0)
                    ans -= (y - x);
                else
                    ans += (y - x);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
